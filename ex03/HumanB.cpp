#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : name(name){};
HumanB::~HumanB()
{
	std::cout << name << " - HumanB destroyed" << std::endl;
};
void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}