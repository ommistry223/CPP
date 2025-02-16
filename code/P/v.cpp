// For alphabetic characters V ...
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << " ";
        }
        cout << "*";

            for(int k=1;k<=(2*(n-i-1)-1);k++)
            {
                cout << " ";
            }
            if(i!=n-1)
            cout << "*";
            
        cout<<endl;
    }
    return 0;
}