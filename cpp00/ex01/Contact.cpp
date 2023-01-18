#include "Contact.hpp"

Contact::Contact() {}
Contact::Contact(int i) { index = i; }
Contact::~Contact() {}

void Contact::add_last_name()
{
    std::cout << "Enter last name\n";
    std::cin >> this->last_name;
}

void Contact::add_first_name()
{
    std::cout << "Enter first name\n";
    std::cin >> this->first_name;
}
void Contact::add_nick_name()
{
    std::cout << "Enter nick name\n";
    std::cin >> this->nickname;
}
void Contact::add_phone_number()
{
    std::cout << "Enter phone number\n";
    std::cin >> this->phone_number;
}
void Contact::add_dark_secret()
{
    std::cout << "Enter dark secret\n";
    std::cin >> this->dark_secret;
}

void Contact::add_index(int i)
{
    this->index = i;
}

int Contact::get_index() { return index; }
std::string Contact::get_last_name() { return last_name; }
std::string Contact::get_first_name() { return first_name; }
std::string Contact::get_nickname() { return nickname; }
std::string Contact::get_phone_number() { return phone_number; }
std::string Contact::get_dark_secret() { return dark_secret; }
