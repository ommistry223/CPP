#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;

int main()
{
    string s ="one two one two three ";
    map<string,int> m;
    stringstream obj(s);
    string buf;
    while(obj>> buf)
    {
        m[buf]++;
    }
    for(auto it : m)
    {
        cout<< it.first << ":" << it.second << endl;
    }
    return 0;

}