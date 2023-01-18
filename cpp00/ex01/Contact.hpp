#include <string>
#include <iostream>

class Contact
{
private:
    int index;
    std::string last_name;
    std::string first_name;
    std::string nickname;
    std::string phone_number;
    std::string dark_secret; 
public:
    Contact();
    Contact(int i);
    ~Contact();
    void add_index(int i);
    void add_last_name();
    void add_first_name();
    void add_nick_name();
    void add_phone_number();
    void add_dark_secret();
    int get_index();
    std::string get_last_name();
    std::string get_first_name();
    std::string get_nickname();
    std::string get_phone_number();
    std::string get_dark_secret();
};
