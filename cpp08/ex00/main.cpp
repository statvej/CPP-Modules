#include "easyfind.hpp"
#include <iostream>

int main(void) {
    std::vector<int> 	arr(10);
    for (int i = 0; i < 10; i++)
        arr[i] = i + 1;

    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << " ";


    std::vector<int>::iterator iter = easyfind(arr, 6);
    std::cout << std::endl << COLOR_GREEN << *iter << std::endl;
    try {
        iter = easyfind(arr, 90);
        std::cout << std::endl << COLOR_GREEN << *iter << std::endl;
    }
    catch (std::exception &e){

        std::cout << e.what() << std::endl;
    }
}