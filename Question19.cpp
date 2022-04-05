//write a program to find area and circumference of circle
#include<iostream>
using namespace std;

int main()
{
    float r,area,c;
    cout<<"enter a radius of circle:";
    cin>>r;
    area=3.14*r*r;
    cout<<"area of circle is:"<<area<<endl;
    c=2*3.14*r;
    cout<<"circumference of circle is:"<<c;
    return 0;
}
