#include<iostream>
using namespace std;
int factorial(int a)
{
    if(a>1)
    {
        return a*factorial(a-1);
    }
    else {
        return 1;
    }
    
}

int main()
{
    int n;
    cout << "enter the number  :: ";
    cin>> n;
    cout<< "Factorial of "<< n<< " is " << factorial(n) << endl << "thankyou"; 

    return 0;

}
