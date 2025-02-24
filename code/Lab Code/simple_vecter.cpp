#include <iostream>
#include <vector>

using namespace std;

class Employee {
public:
    string name;
    double salary;
    double bonus;

    Employee(string empName, double empSalary, double empBonus) {
        name = empName;
        salary = empSalary;
        bonus = empBonus;
    }
};

void getdata(vector<Employee>& emp) {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        double salary, bonus;

        cout << "Enter name, salary, and bonus for employee " << i + 1 << ": ";
        cin >> name >> salary >> bonus;

        emp.emplace_back(name, salary, bonus);
    }
}

void displaydata(const vector<Employee>& emp) {
    cout << "\nEmployee Details:\n";
    for (const auto& e : emp) {
        cout << "Name: " << e.name << ", Salary: " << e.salary << ", Bonus: " << e.bonus << endl;
    }
}

int main() {
    vector<Employee> emp;

    getdata(emp);
    displaydata(emp);

    return 0;
}
