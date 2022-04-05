#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value for a:";
    cin>>a;
    cout<<"enter value for b:";
    cin>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"After swapping:"<<a<<" "<<b;
    return 0;

}
