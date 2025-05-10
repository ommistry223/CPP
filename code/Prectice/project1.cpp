#include <iostream>
using namespace std;
int main() {
    int num_Of_TestCases;
    cout << "Enter the number of test cases: ";
    cin >> num_Of_TestCases;
    cout << "-------------------------"<<endl;
    if(num_Of_TestCases <= 0) {
        cout << "Invalid number of test cases."<<endl;
        return 1; 
    }
    while (num_Of_TestCases--) {
        cout << "Enter the rent cost: ";
        int rent_Cost, purchase_Cost;
        cin >> rent_Cost ;
        cout << "Enter the purchase cost: ";
        cin >> purchase_Cost;
        if (rent_Cost >= purchase_Cost) {
            cout << "Maximum months rented: 0"<<endl;
            cout << "-------------------------" <<endl;
        } else {
            int Max_Months_Rented=(purchase_Cost - 1)/rent_Cost;
            cout << "Maximum months rented: ";
            cout << Max_Months_Rented << endl;
            cout << "-------------------------"<<endl;
        }
    }
    return 0;
}