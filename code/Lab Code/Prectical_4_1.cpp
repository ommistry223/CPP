#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Virtual Base Class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void display() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    } 
};

// Employee inherits Person virtually
class Employee : virtual public Person {
protected:
    int employeeID;

public:
    Employee(string n, int a, int id) 
        : Person(n, a), employeeID(id) {}

    void display() const {
        Person::display();
        cout << "Employee ID: " << employeeID << endl;
    }

    int getID() const {
        return employeeID;
    }
};

// Manager inherits Employee normally (Person already inherited virtually)
class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int a, int id, string dept)
        : Person(n, a), Employee(n, a, id), department(dept) {}

    void display() const {
        Employee::display();
        cout << "Department: " << department << endl;
    }

    string getDepartment() const {
        return department;
    }
};
