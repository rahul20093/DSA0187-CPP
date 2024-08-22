#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:

    virtual double area() const = 0;

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
};

class Circle : public Shape {
private:
    double radius;
public:

    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {

    Shape* shape1 = new Rectangle(5.0, 3.0);
    Shape* shape2 = new Circle(4.0);

    cout << "Rectangle Area: " << shape1->area() << endl;

    cout << "Circle Area: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}
