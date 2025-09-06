#ifndef CAR_HPP
# define CAR_HPP
# include <iostream>
class Car
{
  public:
	Car(std::string brand = "UNKNOWN");
	~Car();
	void accelerate(int a);
	void brake(int);
	void display(void);

  private:
	std::string brand;
	int speed;
};
#endif