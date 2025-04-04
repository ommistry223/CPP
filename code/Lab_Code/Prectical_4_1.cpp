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
    Person() : name(""), age(0) {}

    virtual void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // Clear input buffer
    }

    virtual void display() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Employee inherits Person virtually
class Employee : virtual public Person {
protected:
    int employeeID;

public:
    Employee() : employeeID(0) {}

    void input() override {
        Person::input();
        cout << "Enter employee ID: ";
        cin >> employeeID;
        cin.ignore(); // Clear input buffer
    }

    void display() const override {
        Person::display();
        cout << "Employee ID: " << employeeID << endl;
    }

    int getID() const {
        return employeeID;
    }
};

// Manager inherits Employee
class Manager : public Employee {
private:
    string department;

public:
    Manager() : department("") {}

    void input() override {
        Employee::input();
        cout << "Enter department: ";
        getline(cin, department);
    }

    void display() const override {
        Employee::display();
        cout << "Department: " << department << endl;
    }

    string getDepartment() const {
        return department;
    }
};

int main() {
    Manager m;
    cout << "--- Enter Manager Details ---" << endl;
    m.input();

    cout << "\n--- Manager Information ---" << endl;
    m.display();

    return 0;
}
