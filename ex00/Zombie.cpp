#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(const std::string& name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " - ";
	std::cout << "Zombie destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
