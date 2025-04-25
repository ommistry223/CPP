#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    // Parameterized constructor
    Point(int a, int b) {
        x = a;
        y = b;
    }
    
    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(10, 20); // Parameterized constructor called
    p.display();
    return 0;
}