#include <iostream>
using namespace std;

// Base Class
class Vegetable {
protected:
    string color;
public:
    void getdata() {
        cout << "Enter color: ";
        cin >> color;
    }
    void putdata() {
        cout << "Color: " << color << endl;
    }
};

// Derived Class
class Tomato : public Vegetable {
private:
    int weight, size;
public:
    void gtdata() {
        cout << "Enter weight and size: ";
        cin >> weight >> size;
    }
    void ptdata() {
        putdata(); // Calls base class method
        cout << "Weight: " << weight << "g\nSize: " << size << "cm" << endl;
    }
};

int main() {
    Tomato t;
    t.getdata();  // Base class method
    t.gtdata();   // Derived class method
    t.ptdata();   // Shows inherited + new data
    return 0;
}