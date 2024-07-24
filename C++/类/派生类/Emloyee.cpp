#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
public:
    Employee(string n);
    void print();
    ~Employee();
};

Employee::Employee(string n) : name(n) {}

void Employee::print() {
    cout << name << endl;
}

Employee::~Employee() {}

class Manager : public Employee {
private:
    int level;
public:
    Manager(string n, int i = 1);
    void print(); // Override the print() function from the base class
};

Manager::Manager(string n, int i) : Employee(n), level(i) {}

void Manager::print() {
    cout << "Name: " << name << ", Level: " << level << endl;
}

int main() {
    Employee employee("John");
    Manager manager("Alice", 2);

    employee.print(); // Output: John
    manager.print(); // Output: Name: Alice, Level: 2

    return 0;
}