//write a program to enter P,T,R and calculate compound interest.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int p,r,t,ci,cp;
    cout<<"enter principle amount:";
    cin>>p;
    cout<<"enter rate of interest:";
    cin>>r;
    cout<<"enter the time:";
    cin>>t;
    ci=p*pow((1+r/100),t)-p;
    cp=p*pow((1+r/100),t);
    cout<<"The interest after compound for amount"<<p<<"for"<<t<<"years @"<<r<<"% is:"<<ci<<endl;
    cout<<"The total amount after compounded  for amount"<<p<<"for"<<t<<"years @"<<r<<"% is:"<<cp<<endl;
    return 0;
}
