#include "Zombie.hpp"
#include <iostream>


void	randomChump(std::string name)
{
	Zombie temp(name);
	temp.announce();
}