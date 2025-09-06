#include "Zombie.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " <zombie_name>" << std::endl;
		return (1);
	}
	std::cout << "============================STACK=======================" << std::endl;
	randomChump(av[1]); // stack
	std::cout << "============================HEAP=======================" << std::endl;
	Zombie *zozo = newZombie(av[1]); // heap
	zozo->announce();
	delete zozo;
	std::cout << "===========================END======================" << std::endl;
	return (0);
}