#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(){used_slots = 0;}
PhoneBook::~PhoneBook(){}

void PhoneBook::add_contact() {
    Contact contact;

    contact.add_last_name();
    contact.add_first_name();
    contact.add_phone_number();
    contact.add_nick_name();
    contact.add_dark_secret();
    contact.add_index(this->used_slots + 1);
    this->list[this->used_slots] = contact;
    if (this->used_slots < 7)
        this->used_slots++;
}

void PhoneBook::print_prec_ten(std::string str) {
    std::cout << "|";
    if (str.length() >= 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
}

void PhoneBook::print_head()
{
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::print_contact(int ind) {
    if (ind > this->used_slots + 1)
    {
        std::cerr << "NO CONTACT LIKE THAT\n";
        return;
    }
    print_prec_ten(std::to_string(this->list[ind].get_index()));
    print_prec_ten(this->list[ind].get_first_name());
    print_prec_ten(this->list[ind].get_last_name());
    print_prec_ten(this->list[ind].get_nickname());
    std::cout << "|\n";
}
void PhoneBook::print_list() {
    print_head();
    for (int i = 0; i < this->used_slots; i++)
    {
        print_contact(i);
        std::cout << "|-------------------------------------------|" << std::endl;
    }
}
