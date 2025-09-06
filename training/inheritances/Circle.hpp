#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Shape.hpp"
class Circle : public Shape {
    public:
        Circle(double raduis);
        virtual ~Circle();
        virtual double area() const;
    private:
        double _radius;
};

#endif