#include <iostream>
using namespace std;

class ArrayContainer {
    int* arr;
    int size;
public:
    ArrayContainer(int s) : size(s) {
        arr = new int[size];
        cout << "Array allocated" << endl;
    }
    
    ~ArrayContainer() {
        delete[] arr;  // Free allocated memory
        cout << "Array deallocated" << endl;
    }
};

int main() {
    ArrayContainer ac(10);  // Allocates array
    return 0;
}  // Destructor called automatically, freeing memory