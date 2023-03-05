#include "Array.hpp"
#include <iostream>

int main(void)
{
    try{
        Array<int> A = Array<int>(7);
        Array<int> B;
        A[1] = 2;
        for(int i = 0; i < 7; i++)
            A[i] = i + 1;
        std::cout << A.size() << std::endl;
        std::cout << "__________________________________________-" << std::endl;
        for(int i = 0; i < 70; i++)
            std::cout << A[i] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what();
    }
}