#include <iostream>
using namespace std;

int main() {
    int num_Of_TestCases;
    cout << "Enter the number of test cases: ";
    cin >> num_Of_TestCases;
    while (num_Of_TestCases--) {
        cout << "Enter the rent cost: ";
        int rent_Cost, purchase_Cost;
        cin >> rent_Cost ;
        cout << "Enter the purchase cost: ";
        cin >> purchase_Cost;
        if (rent_Cost >= purchase_Cost) {

            cout << 0 << endl;
        } else {
            int Max_Months_Rented = (purchase_Cost - 1) / rent_Cost;
            cout << "Maximum months rented: ";
            cout << Max_Months_Rented << endl;
        }
    }
    return 0;
}