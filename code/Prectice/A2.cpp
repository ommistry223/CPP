#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == (n / 2) + 1 || i == n || (j == 1 && i < (n / 2) + 1) || (j == n && i > (n / 2) + 1)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}   
// This code prints a pattern based on the input number of rows. The pattern consists of stars and spaces, forming a specific shape. The logic checks for certain conditions to determine where to print stars and where to print spaces.