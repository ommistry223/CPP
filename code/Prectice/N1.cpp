#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int rent_cost,purchase_cost;
        cin>>rent_cost>>purchase_cost;
        if(rent_cost<purchase_cost)
        {
        if(purchase_cost%rent_cost==0) cout<<(purchase_cost/rent_cost)-1<<endl;
        else cout<<(purchase_cost/rent_cost)<<endl;
        }
        else cout<<0<<endl;
    }
return 0;
}