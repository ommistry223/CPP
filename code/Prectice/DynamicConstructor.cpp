#include <iostream>
using namespace std;

class Array {
    int *arr;
    int size;
public:
    // Dynamic constructor
    Array(int s) {
        size = s;
        arr = new int[size];
    }
    
    ~Array() {
        delete[] arr;
    }
    
    void fillArray() {
        for(int i = 0; i < size; i++) {
            arr[i] = i * 10;
        }
    }
    
    void printArray() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array a(5); // Dynamic constructor called
    a.fillArray();
    a.printArray();
    return 0;
}