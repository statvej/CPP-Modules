#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::string sep = "__________________________________________\n";

	const WrongAnimal* meta = new WrongAnimal();

	std::cout << sep;
	WrongAnimal* i = new WrongCat();
	std::cout << sep;
	
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << sep;
	i->makeSound();
	meta->makeSound();
	std::cout << sep;
	
	delete meta;
	delete i;
}