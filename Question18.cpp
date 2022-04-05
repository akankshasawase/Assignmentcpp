//write a program to find area of triangle using heron's formula.
#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
     float s,a, s1,s2,s3;

     cout<<"enter a value for 1st side:";
     cin>>s1;
     cout<<"enter a value for 2nd side:";
     cin>>s2;
     cout<<"enter a value for 3rd side:";
     cin>>s3;
     s=(s1+s2+s3)/2;

     a=sqrt(s*(s-s1)*(s-s2)*(s-s3));

     cout<<"Area of triangle is:"<<a;
     return 0;
 }
