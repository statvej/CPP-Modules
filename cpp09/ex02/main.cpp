#include <iostream>
#include <vector>
#include <list>

void insertion_sort(std::list<int>& lst) {
    std::list<int>::iterator i, j, key;
    for (i = lst.begin(); i != lst.end(); i++) {
        key = i;
        j = i;
        j--;
        while (j != lst.end() && *key < *j) {
            lst.splice(j, lst, key);
            j--;
        }
    }
}

void merge_sort(std::list<int>& lst, std::list<int>::iterator start, std::list<int>::iterator end) {
    if (distance(start, end) > 1) {
        std::list<int>::iterator mid = start;
        advance(mid, distance(start, end) / 2);
        merge_sort(lst, start, mid);
        merge_sort(lst, mid, end);
        std::list<int> left_lst(start, mid);
        std::list<int> right_lst(mid, end);
        std::list<int>::iterator i = left_lst.begin();
        std::list<int>::iterator j = right_lst.begin();
        std::list<int>::iterator k = start;
        while (i != left_lst.end() && j != right_lst.end()) {
            if (*i <= *j) {
                *k = *i;
                i++;
            }
            else {
                *k = *j;
                j++;
            }
            k++;
        }
        while (i != left_lst.end()) {
            *k = *i;
            i++;
            k++;
        }
        while (j != right_lst.end()) {
            *k = *j;
            j++;
            k++;
        }
    }
}

void merge_insertion_sort(std::list<int>& lst) {
    const int threshold = 10;
    if (lst.size() <= threshold) {
        insertion_sort(lst);
    }
    else {
        merge_sort(lst, lst.begin(), lst.end());
    }
}

void merge(std::vector<int>& arr, int left, int middle, int right) {
    int left_size = middle - left + 1;
    int right_size = right - middle;

    std::vector<int> left_arr(left_size);     // create temporary arrays for left and right subarrays
    std::vector<int> right_arr(right_size);

    // copy elements of left and right subarrays into temporary arrays
    for (int i = 0; i < left_size; i++) {
        left_arr[i] = arr[left + i];
    }
    for (int j = 0; j < right_size; j++) {
        right_arr[j] = arr[middle + j + 1];
    }

    int i = 0;      // index for left subarray
    int j = 0;      // index for right subarray
    int k = left;   // index for merged array

    // merge the left and right subarrays into a sorted array
    while (i < left_size && j < right_size) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i++;
        }
        else {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    // copy any remaining elements of left or right subarray into merged array
    while (i < left_size) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }
    while (j < right_size) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int middle = (left + right) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

void insertionSort(std::vector<int>& vec) {
    size_t i, j;
    int key;
    for (i = 1; i < vec.size(); i++) {
        key = vec[i];
        j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}

void printIntArray(std::string msg, std::vector<int> array)
{
    std::cout << msg << ":\t";
    for (size_t i = 0; i < array.size(); i++)
        std::cout << array[i] << (i < array.size() - 1 ? " " : "\n");
}


int main(int argc, char* argv[]) {
    clock_t	start;
    clock_t end;
    double vectorDIFF, listDIFF;
    if (argc < 2) {
        std::cout << "Wrong number of args";
        return 1;
    }

    
    start = clock();
    std::vector<int> arr;
    for (int i = 1; i < argc; i++) {
        if (!isdigit(*argv[i])) {
            std::cout << "Please insert only digits" << std::endl;
            return 1;
        }
        arr.push_back(atoi(argv[i]));
    }
    printIntArray("Unsorted array", arr);
    int n = arr.size();
    if (n <= 10)
        insertionSort(arr);
    else
        mergeSort(arr, 0, n - 1);
    end = clock();
    vectorDIFF = (double)(end - start) / CLOCKS_PER_SEC * 1e3;
    printIntArray("Sorted array", arr);

    start = clock();
    std::list<int> list;
    for (int i = 1; i < argc; i++) {
        list.push_back(atoi(argv[i]));
    }
    merge_insertion_sort(list);
    end = clock();
    listDIFF = (double)(end - start) / CLOCKS_PER_SEC * 1e3;

    std::cout << "Time to process a range of " << arr.size() << " elements with std::vector: " << vectorDIFF << " ms" << std::endl;
    std::cout << "Time to process a range of " << arr.size() << " elements with std::list:  " << listDIFF << " ms" << std::endl;

    return 0;
}