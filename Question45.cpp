//write a program to enter P,T,R and calculate simple interest.
#include<iostream>
using namespace std;

int main()
{
    int p,r,t,i;
    cout<<"enter principle amount:";
    cin>>p;
    cout<<"enter rate of interest:";
    cin>>r;
    cout<<"enter the time:";
    cin>>t;
    i=(p*r*t)/100;
    cout<<"The simple interest for amount"<<p<<"for"<<t<<"years @"<<r<<"% is:"<<i;
    return 0;
}
