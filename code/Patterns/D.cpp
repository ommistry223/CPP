#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Row :: ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==n && i!=n && i!=1 || i==1 && j!=n || i==n && j!=n || j==2 )
            {
                cout << "* ";
            }
            else
            cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
