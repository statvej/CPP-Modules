#include "Span.hpp"
#include <iostream>

int main(void) {
    
    try {
        Span my_array(10);
        for (int i = 0; i < 10; i++)
        {
            my_array.addNumber(pow(2,i));
        }
        my_array.print();
        std::cout << "shortest span is " << my_array.shortestSpan() << " and longest span is " << my_array.longestSpan() << std::endl;
        Span big_boy(20);

        big_boy.add_many_more(big_boy.getSpan().begin(), big_boy.getSpan().begin() + 20);
        big_boy.print();

    }
    catch (std::exception &e){

        std::cout << e.what() << std::endl;
    }
}