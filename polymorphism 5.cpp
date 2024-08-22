#include <iostream>
using namespace std;

// Base class
class Person {
public:
    // Virtual function
    virtual void greet() const {
        cout << "Hello, I am a person." << endl;
    }

    // Virtual destructor
    virtual ~Person() {}
};

// Derived class Student
class Student : public Person {
public:
    // Overriding the greet function
    void greet() const override {
        cout << "Hello, I am a student." << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    // Overriding the greet function
    void greet() const override {
        cout << "Hello, I am a teacher." << endl;
    }
};

int main() {
    // Creating objects of Student and Teacher
    Person* person1 = new Student();
    Person* person2 = new Teacher();

    // Calling the greet function
    person1->greet(); // Calls Student's greet
    person2->greet(); // Calls Teacher's greet

    // Clean up
    delete person1;
    delete person2;

    return 0;
}
