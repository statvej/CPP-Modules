#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
// #include "WrongCat.hpp"

int main()
{
	std::string sep = "__________________________________________\n";

	std::cout << sep;
	const Animal* j = new Dog();
	std::cout << sep;
	Animal* i = new Cat();
	std::cout << sep;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << sep;
	i->makeSound();
	j->makeSound();
	std::cout << sep;
	Animal* zoo[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
		zoo[i]->makeSound();
		std::cout << sep;
	}
	for (int i = 0; i < 10; i++)
		delete zoo[i];
	std::cout << sep;
	delete i;
	delete j;
}