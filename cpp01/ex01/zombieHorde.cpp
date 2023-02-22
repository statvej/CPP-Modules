#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* ret = new Zombie[N];

    for (int i = 0; i < N; i++)
        ret[i].rename(name);
    return ret;
}