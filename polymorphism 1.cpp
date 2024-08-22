#include <iostream>
using namespace std;

class Person {
public:
	
    virtual void work() {
        cout << "Person is working" << endl;
    }

    virtual ~Person() {}
};

class Employee : public Person {
public:
	
    void work() override {
        cout << "Employee is working on tasks" << endl;
    }
};

class Manager : public Person {
public:
    
    void work() override {
        cout << "Manager is managing the team" << endl;
    }
};

int main() {
    
    Person* p1 = new Employee();
    Person* p2 = new Manager();

    p1->work(); 
    p2->work(); 

    
    delete p1;
    delete p2;

    return 0;
}
