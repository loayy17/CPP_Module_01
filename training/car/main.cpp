#include "Car.hpp"

int main() {
    // Create cars
    Car car1("Toyota");
    Car car2("BMW");

    std::cout << "Initial states:" << std::endl;
    car1.display();
    car2.display();

    // Test acceleration
    std::cout << "\nAccelerating cars..." << std::endl;
    car1.accelerate(50);
    car2.accelerate(80);

    car1.display();
    car2.display();

    // Test braking
    std::cout << "\nBraking cars..." << std::endl;
    car1.brake(20);
    car2.brake(100); // test going below zero

    car1.display();
    car2.display();
    std::cout << "==========================" << std::endl;
    Car *toyota = new Car("TOYOTA");
    toyota->display();
    std::cout << "++++++++++++++++++++++++" << std::endl;
    delete toyota;
    std::cout << "++++++++++++++++++++++++" << std::endl;
    return 0;
}
