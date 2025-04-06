#include <iostream>
using namespace std;

class Shape {
protected:
    string shape_name;
public:
    void get() {
        cout << "Enter shape name: ";
        cin >> shape_name;
    }
    void print() {
        cout << "Shape: " << shape_name << endl;
    }
};

class Circle : public Shape {
protected:
    float radius;
public:
    void getRadius() {
        cout << "Enter radius: ";
        cin >> radius;
    }
    void printRadius() {
        print(); // Calls Shape's print()
        cout << "Radius: " << radius << endl;
    }
};

class Area : public Circle {
private:
    float area;
public:
    void display() {
        area = 3.14 * radius * radius;
        printRadius(); // Calls Circle's method
        cout << "Area: " << area << endl;
    }
};

int main() {
    Area a;
    a.get();        // Shape
    a.getRadius();   // Circle
    a.display();     // Area
    return 0;
}