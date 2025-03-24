#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if( i==1 || i==n && j!=(n/2+1) || j==(n/2)+1)
            {

                if(i==n && j>=(n/2+2))
                cout << "  ";

                else
                cout << "* ";
            }
            
            
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
 }
