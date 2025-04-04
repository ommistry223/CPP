#include<iostream>
using namespace std;

int main()
{
    char name[100];
    cout << "Enter your name :: ";
    cin >> name;
    int num1,num2,sum;
    cout << "Enter the first numeber";
    cin >> num1;
    cout << "Enter the second number";
    cin >> num2;
    sum=num1 + num2;
    cout << "The sum is " << sum << endl;

    return 0;
}