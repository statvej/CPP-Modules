#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data first;
	Data *firstPtr;
	Data *secondPtr;
	
	first.a = 619;
	first.b = 42;
	firstPtr = &first;
	std::cout << "a = " << firstPtr->a << "\nb = " << (*firstPtr).b << std::endl;
	uintptr_t second = Serializer::serialize(firstPtr);
	std::cout << "int pointer is " << second << std::endl;
	secondPtr = Serializer::deserialize(second);
	std::cout << "a = " << secondPtr->a << "\nb = " << (*secondPtr).b << std::endl;
	
	return (0);
}
