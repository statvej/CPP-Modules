#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
// #include "WrongCat.hpp"

int main()
{
	std::string sep = "__________________________________________\n";
	Animal tiger = Cat();

	std::cout << sep;
	Animal cat;
	std::cout << sep;
	Dog dog;
	std::cout << sep;

	cat.makeSound();
	dog.makeSound();
	std::cout << sep;

	const Animal* meta = new Animal();
	std::cout << sep;
	const Animal* j = new Dog();
	std::cout << sep;
	Animal* i = new Cat();
	std::cout << sep;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << sep;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
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
	delete meta;
	delete i;
	delete j;
}