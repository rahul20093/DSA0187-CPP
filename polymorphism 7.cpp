#include <iostream>
using namespace std;

class Vehicle {
public:
    
    virtual void drive() const {
        cout << "Driving a vehicle." << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void drive() const override {
        cout << "Driving a car." << endl;
    }
};

class Truck : public Vehicle {
public:

    void drive() const override {
        cout << "Driving a truck." << endl;
    }
};

int main() {

    Vehicle* vehicle1 = new Car();
    Vehicle* vehicle2 = new Truck();

    vehicle1->drive(); 
    vehicle2->drive();

    delete vehicle1;
    delete vehicle2;

    return 0;
}
