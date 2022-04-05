//write a program to print the area of a hexagon
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float area,s;
    cout<<"enter a side of hexagon:\n";
    cin>>s;
    area=(6*(s*s))/(4*tan(M_PI/6));
    cout<<"The area of hexagon is:"<<area<<"\n";
    return 0;
}
