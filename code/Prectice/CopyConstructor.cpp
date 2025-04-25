#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    // Parameterized constructor
    Student(string n, int a) : name(n), age(a) {}
    
    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }
    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Alice", 20); // Parameterized constructor
    Student s2 = s1;         // Copy constructor called
    
    s1.display();
    s2.display();
    return 0;
}