#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    // Constructor 1 - no parameters
    Rectangle() {
        length = 0;
        width = 0;
    }
    
    // Constructor 2 - one parameter (square)
    Rectangle(int side) {
        length = width = side;
    }
    
    // Constructor 3 - two parameters
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    
    void area() {
        cout << "Area: " << length * width << endl;
    }
};

int main() {
    Rectangle r1;       // Calls constructor 1
    Rectangle r2(5);    // Calls constructor 2
    Rectangle r3(4, 6); // Calls constructor 3
    
    r1.area();
    r2.area();
    r3.area();
    return 0;
}