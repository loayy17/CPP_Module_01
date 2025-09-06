#include "Circle.hpp"
#include <cmath>
#include <iostream>
Circle::Circle(double radious) : _radius(radious)
{
    std::cout << "Circle constructor called"<< _name << std::endl;
}
Circle::~Circle()
{
	std::cout << "Circle destructor called" << std::endl;
}
double Circle::area() const
{
	return (M_PI * _radius * _radius);
}