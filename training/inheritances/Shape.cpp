#include "Shape.hpp"
#include <iostream>
Shape::Shape() {
    std::cout << "Shape constructor called" << std::endl;
}

Shape::~Shape() {
    std::cout << "Shape destructor called" << std::endl;
}
void Shape::display() const
{
    std::cout << "the name of Shape is = " << _name << std::endl;
}
void Shape::setName(std::string name) {
    _name = name;
}
std::string Shape::getName() const
{
    return _name;
}