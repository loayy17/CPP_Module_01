#include "Car.hpp"

Car::Car(std::string brand) : brand(brand), speed(0){};

Car::~Car()
{
	std::cout << "THE CAR CLASS DESTROYED" << std::endl;
}
void Car::accelerate(int a)
{
	speed += a;
	if (speed < 0)
		speed = 0;
	if (speed > 100)
		speed = 100;
}
void Car::brake(int b)
{
	speed -= b;
	if (speed < 0)
		speed = 0;
	if (speed > 100)
		speed = 100;
}
void Car::display(void)
{
	std::cout << "Car brand: " << brand << ",Speed: " << speed << " km/h" << std::endl;
}