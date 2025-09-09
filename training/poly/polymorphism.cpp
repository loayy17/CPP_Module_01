#include <iostream>
#include <cmath>
class Shape {
    public:
        virtual double area () = 0;
        virtual double perimeter() = 0;
};
class ColoredShape : public Shape {
    protected:
        std::string color;
    public:
        ColoredShape(const std::string &color){
            this->color = color;
        };
    std::string getColor() const {
    return color;
}    
};
class Circle : public ColoredShape {
    public:
        Circle(float r,std::string c): r(r),ColoredShape(c){};
        double area() {
            return r * r * 3.14;
        }
        double perimeter() {
            return 2* r * 3.14;
        }
     private:
        float r;   
};
class Rectangular : public ColoredShape {
    public:
        Rectangular(float w, float h,std::string c): h(h), w(w),ColoredShape(c) {};
        double area() {
            return w * h;
        }
        double perimeter() {
            return 2*w + 2 *h;
        }
    private:
        float w;
        float h;    
};
class Triangle : public ColoredShape {
    public:
        Triangle(float base , float sideFirst,float sideSecond,std::string c):base(base), sideFirst(sideFirst),sideSecond(sideSecond),ColoredShape(c) {};
        double area() {
            float p = (base + sideFirst + sideSecond) / 2;
            return sqrt(p * (p - base) * (p - sideFirst) * (p - sideSecond));
        }
        double perimeter() {
            return base + sideFirst + sideSecond;
        }
    private:
        float base;
        float sideFirst;    
        float sideSecond;    
};
int main() {
    ColoredShape *s[3];
    s[0] = new Circle(1,"red");
    s[1] = new Rectangular(5,4,"Green");
    s[2] = new Triangle(5,5,8,"Yellow");
    for(int i = 0 ;i < 3; i++)
    {
        std::cout << "Shape " << i + 1 << ":\n";
        std::cout << "Color : " << s[i]->getColor() << std::endl;
        std::cout << "Area: " << s[i]->area() << std::endl;
        std::cout << "Perimeter: " << s[i]->perimeter() << std::endl;
    }
    for (int i = 0; i < 3; i++) {
        delete s[i];
    }
    return 0;
}