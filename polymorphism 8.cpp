#include <iostream>
using namespace std;

class Employee {
public:

    virtual double calculatePay() const = 0;

    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    double baseSalary;
    double bonus;
public:

    Manager(double salary, double bonusAmount)
        : baseSalary(salary), bonus(bonusAmount) {}

    double calculatePay() const override {
        return baseSalary + bonus;
    }
};

class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:

    Engineer(double rate, int hours)
        : hourlyRate(rate), hoursWorked(hours) {}

    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};

int main() {

    Employee* employee1 = new Manager(5000.0, 1000.0);
    Employee* employee2 = new Engineer(50.0, 160);

    cout << "Manager's Pay: $" << employee1->calculatePay() << endl;

    cout << "Engineer's Pay: $" << employee2->calculatePay() << endl;

    delete employee1;
    delete employee2;

    return 0;
}
