//write a program to print area of polygon
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float area,s,n;
    cout<<"enter a number of sides of polygon:"<<endl;
    cin>>n;
    cout<<"enter a length of polygon:\n";
    cin>>s;
    area=(n*(s*s))/(4.0*tan(M_PI/n));
    cout<<"The area of polygon is:"<<area<<"\n";
    return 0;
}
