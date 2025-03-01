#include<iostream>
using namespace std;

int main()
{
    int a=10,b=12;

    // Swapping without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "After swapping: " << "a = " << a << ", b = " << b;
    
    return 0;
 
}