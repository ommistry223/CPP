#include<iostream>
#include<fstream>
using namespace std;

int main()

{
    ofstream file;
    file.open("examle.txt");
    if(file.is_open())
    {
        cout<<"File opened successfully"<<endl;
        file << "Hello, World!";
        file.close();
    }
    else
    {
        cout<<"File not opened"<<endl;
    }
    rename("examle.txt", "example2.txt");

    ifstream file1;
    file1.open("examle.txt");
    if(file1.is_open())
    {
        cout<<"File opened successfully"<<endl;
        string line;
        while(getline(file1, line))
        {
            cout<<line<<endl;
        }
        file1.close();
    }
    else
    {
        cout<<"File not opened"<<endl;
    }
    rename("examle.txt", "example1.txt");
    return 0;
}