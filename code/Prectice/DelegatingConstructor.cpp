#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    double salary;
public:
    // Delegating constructor
    Employee() : Employee(0, "", 0.0) {}
    
    // Main constructor that others delegate to
    Employee(int i, string n, double s) : id(i), name(n), salary(s) {}
    
    void display() {
        cout << "ID: " << id << ", Name: " << name 
             << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e1; // Calls delegating constructor
    Employee e2(101, "John", 50000.0);
    
    e1.display();
    e2.display();
    return 0;
}