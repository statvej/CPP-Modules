#include "Zombie.hpp"

int main (void)
{
	Zombie zombie1("static");

	zombie1.announce();

	Zombie *zombie2 = newZombie("dynamic");
	zombie2->announce();
	delete zombie2;
	randomChump(getRandomName());
	return (0);
}