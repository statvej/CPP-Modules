#include "Harl.hpp"

void Harl::complain(std::string level) {
    void (Harl:: * foo_list[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string foo_name_list[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; i++)
    {
        if (foo_name_list[i] == level)
        {
            switch (i)
            {
            case 0:
                while (i < 4)
                    (this->*foo_list[i++])();
            case 1:
                while (i < 4)
                    (this->*foo_list[i++])();
            case 2:
                while (i < 4)
                    (this->*foo_list[i++])();
            case 3:
                while (i < 4)
                    (this->*foo_list[i++])();
            }
            return;
        }
    }
}

Harl::Harl()
{

}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
    std::cout << "[DEBUG]\n";
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pic"
        "kle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::info(void)
{
    std::cout << "[INFO]\n";
    std::cout << "I cannot believe adding extra bacon cost more money. You don'"
        "t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning(void)
{
    std::cout << "[WARNING]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve bee"
        "n coming here for years and you just started working here last month."
        << std::endl;
}

void	Harl::error(void)
{
    std::cout << "[ERROR]\n";
    std::cout << "This is unacceptable, I want to speak to the manager now."
        << std::endl;
}
