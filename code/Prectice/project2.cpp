#include <iostream>
using namespace std;

int main() {
    int Num_Test;
    cin >> Num_Test;
    while (Num_Test--) {
        int Rent_cost, Purchase_cost;
        cin >> Rent_cost >> Purchase_cost;
        if (Rent_cost >= Purchase_cost) {
            cout << 0 << endl;
        } else {
            int max_months = (Purchase_cost - 1) / Rent_cost;
            cout << max_months << endl;
        }
    }
    return 0;
}