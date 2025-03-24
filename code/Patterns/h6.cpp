#include<iostream>
using namespace std;
class student
{
    char name[20];
    int Id_no;

    public:
    void get_student_details()
    {
        cout << "Enter the name of the student :";
        cin >> name;
        cout << "Enter the student Id : ";
        cin >> Id_no;
    }
    void put_student_details()
    {
        cout << "Name : " << name << endl;
        cout << "Id : " << Id_no << endl;
    }
};

int main()
{
    student s1,s2;
    cout << "Enter the first student ditais..........."<< endl ;
    s1.get_student_details();
    cout << "Enter the second student ditais..........."<< endl ;
    s2.get_student_details();

    s1.put_student_details();
    cout << endl;
    s2.put_student_details();

    return 0;
}