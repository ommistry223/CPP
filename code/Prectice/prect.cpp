#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>student;
    student[1] = "Om";
    student[2] = "Ram";
    student[3] = "Ronit";

    cout << "Students: " << endl;
    for(auto &i : student){
        cout << i.first <<" - " << i.second << endl;
    }   
    return 0;
}