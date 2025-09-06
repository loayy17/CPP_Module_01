#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, const std::string &name)
{
    if (N <= 0)
        return NULL;
    Zombie* Horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        Horde[i].setName(name);
    return Horde;
}