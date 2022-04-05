// write a program to find third angle of triangle
#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
     int a1,a2,a3;
     cout<<"enter a 1st angle:";
     cin>>a1;
     cout<<"enter a 2nd angle:";
     cin>>a2;
     a3=180-(a1+a2);
     cout<<"the 3rd angle is:"<<a3;
     return 0;
 }
