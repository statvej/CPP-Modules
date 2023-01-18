#include "PhoneBook.hpp"

int main() {
    std::string input;
    std::string input_int;
    PhoneBook pb;
    while (1) {
        std::cout << "PhoneBook3000 >";
        std::cin >> input;
        std::cout << input << "\n";
        if (input == "ADD")
            pb.add_contact();
        else if (input == "SEARCH")
        {
            pb.print_list();
            std::cin >> input_int;
            if(input_int.length() == 1 && std::isdigit(input_int[0]))
                pb.print_contact(std::stoi(input_int) - 1);
            else
                std::cout << "Please enter valid index\n";
        }
        else if(input == "EXIT")
            break;
    }
}