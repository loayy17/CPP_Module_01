#include <iostream>
#include "Zombie.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "Usage: " << av[0] << " <zombie_name>" << std::endl;
        return 1;
    }

    Zombie *zozo = newZombie(av[1]);
    std::cout << "A new zombie has been created! " << zozo->getName() << std::endl;
    delete zozo;
    return 0;
}