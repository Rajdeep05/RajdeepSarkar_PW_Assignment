#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"X :";cin>>x;
    cout<<"Y :";cin>>y;
    int t;
    t=x;
    x=y;
    y=t;
    cout<<"After swap";
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    return 0;
}