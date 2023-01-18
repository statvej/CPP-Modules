#include <iostream>

int main (void)
{
	std::string string("HI THIS IS BRAIN");
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address of a string is " << &string << "\n";
	std::cout << "Address held by stringPTR is " << stringPTR << "\n";
	std::cout << "Address of stringREF is " << &stringREF << "\n";

	std::cout << "Value of a string is " << string << "\n";
	std::cout << "Value held by stringPTR is " << *stringPTR << "\n";
	std::cout << "Value of a stringREF is " << stringREF << "\n";
}
