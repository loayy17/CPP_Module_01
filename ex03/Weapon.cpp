#include <iostream>
#include "Weapon.hpp"
Weapon::Weapon(const std::string &type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destroyed" << std::endl;
}
const std::string &Weapon::getType(void) const
{
    return (this->type);
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}
