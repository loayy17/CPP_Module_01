#include "Rectangular.hpp"
#include "Circle.hpp"
#include <iostream>
int main() {
    Shape* shapes[2];

    shapes[0] = new Rectangular(3, 4);
    shapes[1] = new Circle(5);
    for (int i = 0; i < 2; i++) {
        std::cout << "The shape is => "<< shapes[i]->getName() << "   \nArea: " << shapes[i]->area() << std::endl;
    }
    
    shapes[0]->setName("Rectagular");
    shapes[1]->setName("Circle");
    
    for (int i = 0; i < 2; i++) {
        std::cout << "The shape is => "<< shapes[i]->getName() << "   \nArea: " << shapes[i]->area() << std::endl;
    }
    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }
    return 0;
}
