#include <iostream>
using namespace std;

class student 
{
private:
    string name;
    char id[10];
    int mark_1;
    int mark_2;
    int mark_3;

public:
    void input_details()
    {
        cout << "Enter name: ";
        cin.ignore(); // To clear any leftover newline character
        getline(cin, name);

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter marks for 3 subjects: ";
        cin >> mark_1 >> mark_2 >> mark_3;
    }

    void display_details()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Marks: " << mark_1 << ", " << mark_2 << ", " << mark_3 << endl;
        cout << "Average marks: " << calculate_average() << endl;
    }

    double calculate_average()
    {
        return (mark_1 + mark_2 + mark_3) / 3.0;
    }
};

int main()
{
    student s;

    s.input_details();
    s.display_details();

    return 0;
}
