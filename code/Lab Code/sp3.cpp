#include<iostream>
using namespace std;
class student 
{
    private:
    char name[100];
    int age;
    char city[100];
};

int main()
{
    student s1,s2;
    cout<<"Enter student 1 details:" << endl;
    cout<<"Name: ";
    cin >> s1.name;
    cout<<"Age: ";
    cin>>s1.age;
    cout<<"City: ";
    cin >> s1.city;

    cout<<"Enter student 2 details:" << endl;
    cout<<"Name: ";
    cin >> s2.name;
    cout<<"Age: ";
    cin>>s2.age;
    cout<<"City: ";
    cin >> s2.city;

    cout << "1 student Name :" << s1.name << endl;
    cout << "1 student Age :" << s1.age << endl;
    cout << "1 student City :" << s1.city << endl;

    cout << "2 student Name :" << s2.name << endl;
    cout << "2 student Age :" << s2.age << endl;
    cout << "2 student City :" << s2.city << endl;

    return 0;
}
