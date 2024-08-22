#include <iostream>
using namespace std;

class Person {
public:
    virtual void greet() const {
        cout << "Hello, I am a person." << endl;
    }

    virtual ~Person() {}
};

class Student : public Person {
public:
    
    void greet() const override {
        cout << "Hello, I am a student." << endl;
    }
};

class Teacher : public Person {
public:
	
    void greet() const override {
        cout << "Hello, I am a teacher." << endl;
    }
};

int main() {
   
    Person* person1 = new Student();
    Person* person2 = new Teacher();

    
    person1->greet();
    person2->greet();

    delete person1;
    delete person2;

    return 0;
}
