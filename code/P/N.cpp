#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==j)
            cout<<"* ";
            else
            cout<<"  ";
            
        }
        cout<<endl;
    
    }
    return 0;
}