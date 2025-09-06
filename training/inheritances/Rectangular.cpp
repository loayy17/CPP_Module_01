#include "Rectangular.hpp"
#include <iostream>
Rectangular::Rectangular(double w,double h){
    _width = w;
    _height = h;
    std::cout << "RECT CALLED" << std::endl;
}
Rectangular::~Rectangular(){
    
    std::cout << "RECT Distroyed" << std::endl;
}
double Rectangular::area() const {
    return _width * _height;
}