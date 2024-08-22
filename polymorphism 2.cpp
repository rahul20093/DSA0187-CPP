#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void eat() {
        cout << "Animal is eating" << endl;
    }

    // Virtual destructor
    virtual ~Animal() {}
};

// Derived class Herbivore
class Herbivore : public Animal {
public:
    // Overriding the eat function
    void eat() override {
        cout << "Herbivore is eating plants" << endl;
    }
};

// Derived class Carnivore
class Carnivore : public Animal {
public:
    // Overriding the eat function
    void eat() override {
        cout << "Carnivore is eating meat" << endl;
    }
};

int main() {
    // Creating objects of Herbivore and Carnivore
    Animal* animal1 = new Herbivore();
    Animal* animal2 = new Carnivore();

    // Calling the eat function
    animal1->eat(); // Calls Herbivore's eat
    animal2->eat(); // Calls Carnivore's eat

    // Clean up
    delete animal1;
    delete animal2;

    return 0;
}
