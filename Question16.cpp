//write a program to calculate volume of cylinder.
#include<iostream>
using namespace std;
int main()
{
    int r,h;
    float v;
    cout<<"enter a radius of cylinder:";
    cin>>r;
    cout<<"\n enter a height of cylinder:";
    cin>>h;
    v=3.14*r*r*h;
    cout<<"volume of cylinder:"<<v;
    return 0;

}
