#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
    std::cout << "Zombie created" << std::endl;
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie destroyed" << std::endl;
    std::cout << "Name: " << name << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getName() {
    return name;
}
