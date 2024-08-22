#include <iostream>
#include <cmath> 
using namespace std;

class Shape {
public:
    
    virtual double area() const = 0;
    virtual double volume() const = 0;

    virtual ~Shape() {}
};

class Sphere : public Shape {
private:
    double radius;
public:
    
    Sphere(double r) : radius(r) {}

    double area() const override {
        return 4 * M_PI * pow(radius, 2);
    }

    double volume() const override {
        return (4.0 / 3) * M_PI * pow(radius, 3);
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;
public:
	
    Cylinder(double r, double h) : radius(r), height(h) {}

    double area() const override {
        return 2 * M_PI * radius * (radius + height);
    }

    double volume() const override {
        return M_PI * pow(radius, 2) * height;
    }
};

int main() {
    Shape* shape1 = new Sphere(5.0);
    Shape* shape2 = new Cylinder(3.0, 7.0);

    cout << "Sphere Area: " << shape1->area() << endl;
    cout << "Sphere Volume: " << shape1->volume() << endl;
    
    cout << "Cylinder Area: " << shape2->area() << endl;
    cout << "Cylinder Volume: " << shape2->volume() << endl;

    delete shape1;
    delete shape2;

    return 0;
}
