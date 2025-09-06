#include "HumanA.hpp"   
#include <iostream>
#include "Weapon.hpp"
HumanA::HumanA(const std::string &name,Weapon &weapon) : name(name), weapon(weapon) {};
HumanA::~HumanA() {
    std::cout << name << " - HumanA destroyed" << std::endl;
};
void HumanA::attack() const
{
    std::cout <<name <<" attacks with their " << weapon.getType() <<std::endl;
}
