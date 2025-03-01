#include<iostream>
using namespace std;
int Addition(int Num_A,int Num_B)
{
    int Add = Num_A + Num_B;
    return Add;
}
int main()
{
    int input_A, input_B;
    cout << "Enter two integers: ";
    cin >> input_A >> input_B;

    int sum = Addition(input_A, input_B);
    cout << "Sum of " << input_A << " and " << input_B << " is: " << sum << endl;
    return 0;

}