#include <iostream>
#include <cmath> // For sqrt() in Triangle
using namespace std;

class Shape {
public:
   
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
 
    Rectangle(double w, double h) : width(w), height(h) {}


    double area() const override {
        return width * height;
    }


    double perimeter() const override {
        return 2 * (width + height);
    }
};

class Triangle : public Shape {
private:
    double sideA;
    double sideB;
    double sideC;
public:

    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

    double area() const override {
        double s = perimeter() / 2;
        return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    }

    double perimeter() const override {
        return sideA + sideB + sideC;
    }
};

int main() {

    Shape* shape1 = new Rectangle(5.0, 3.0);
    Shape* shape2 = new Triangle(3.0, 4.0, 5.0);


    cout << "Rectangle Area: " << shape1->area() << endl;
    cout << "Rectangle Perimeter: " << shape1->perimeter() << endl;

    cout << "Triangle Area: " << shape2->area() << endl;
    cout << "Triangle Perimeter: " << shape2->perimeter() << endl;

    delete shape1;
    delete shape2;

    return 0;
}
