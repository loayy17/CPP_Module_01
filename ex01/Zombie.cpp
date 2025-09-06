#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("")
{
}
Zombie::~Zombie()
{
	std::cout << name << " - Zombie destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(const std::string &name)
{
	this->name = name;
}