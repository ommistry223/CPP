#include<iostream>
using namespace std;

int main(){
    int i,j;

    for(i=0;i<=5;i++){
        for(j=0;j<=5-i;j++){
            cout<<" ";
        }
        
        for(int k=0;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;   
}