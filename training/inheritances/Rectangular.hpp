#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP
#include "Shape.hpp"
class Rectangular : public Shape {
    public:
        Rectangular(double w,double h);
        virtual ~Rectangular();
        virtual double area() const;
    private:
        double _width;
        double _height;
};
#endif