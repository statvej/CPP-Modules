#include "Contact.hpp"
#include <array>
#include <iostream>
class PhoneBook
{
private:
    Contact list[8];
    int     used_slots;
public:
    PhoneBook();
    ~PhoneBook();
    void add_contact();
    void print_contact(int ind);
    void print_prec_ten(std::string str);
    void print_head();
    void print_list();
};

