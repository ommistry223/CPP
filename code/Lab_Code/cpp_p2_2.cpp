#include<iostream>
using namespace std;

class student 
{
    private :
    char name[100];
    int roll_no;
    int mark[3];

    public :
    void getdata()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Roll No : ";
        cin>>roll_no;
        cout<<"Enter Marks in 3 subjects : ";
        for(int i=0; i<3; i++)
            cin>>mark[i];
    }
    void putdata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<roll_no<<endl;
        cout<<"Marks : ";
        for(int i=0; i<3; i++)
            cout<<mark[i]<<" ";
        cout<<endl;
        cout<<"Average Mark : "<<(float)(mark[0]+mark[1]+mark[2])/3<<endl;
        cout<<endl;
    }

};

int main()
{
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    student s[n];
    
    for(int i=0; i<n; i++) //hi
    {
        s[i].getdata();
    }
    
    cout<<"Student Details : "<<endl;
    for(int i=0; i<n; i++)
    {
        s[i].putdata();
    }

    return 0;
}