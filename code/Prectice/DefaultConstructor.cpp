#include <iostream>
using namespace std;

class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called" << endl;
    }
};

int main() {
    MyClass obj; // Default constructor called
    return 0;
}