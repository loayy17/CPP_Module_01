#ifndef SHAPE_HPP
# define SHAPE_HPP
# include <iostream>
class Shape
{
  protected:
	std::string _name;

  public:
	Shape();
	virtual ~Shape();
	virtual double area() const = 0;
	virtual void display() const;
    void setName(std::string name) ;
    std::string getName()const ;
};

#endif
