//write a program to find area of scalene triangle
#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
     float s1,s2,s3,s,area;
     cout<<"enter a length of 1st side of triangle:";
     cin>>s1;
     cout<<"enter a length of 2nd side of triangle:";
     cin>>s2;

     cout<<"enter a length of 3rd side of triangle:";
     cin>>s3;
     s=(s1+s2+s3)/2;
     area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
     cout<<"area of scalene triangle:"<<area;
     return 0;


 }
