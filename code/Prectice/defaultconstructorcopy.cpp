#include<iostream>
using namespace std;
class student{
    int roll_no;
    string name;
    public:
    student(){
        cout<<"Default Constructor Called...!"<<endl;
        roll_no = 0;
        name = "Default Name";
    }
    void putdata(){
        cout<<"Roll No is :: "<<roll_no<<endl;
        cout<<"The Name is :: "<<name<<endl;
    }

};
int main(){
    student s1;
    s1.putdata();
    return 0;
}