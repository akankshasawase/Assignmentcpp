//write a program to display various type or arithmetic  operation using mixed data type.
#include<iostream>
using namespace std;
 int main()
 {
     int a=5,b=7;
     double x=3.7,y=8.0;
     cout<<a<<"+"<<b<<"="<<a+b<<endl;
     cout<<x<<"+"<<y<<"="<<x+y<<endl;
     cout<<a<<"+"<<y<<"="<<a+y<<endl;

     cout<<a<<"-"<<b<<"="<<a-b<<endl;
     cout<<x<<"-"<<y<<"="<<x-y<<endl;
     cout<<a<<"-"<<y<<"="<<a-y<<endl;

     cout<<a<<"*"<<b<<"="<<a*b<<endl;
     cout<<x<<"*"<<y<<"="<<x*y<<endl;
     cout<<a<<"*"<<y<<"="<<a*y<<endl;

     cout<<a<<"/"<<b<<"="<<a/b<<endl;
     cout<<x<<"/"<<y<<"="<<x/y<<endl;
     cout<<a<<"/"<<y<<"="<<a/y<<endl;

 return 0;
 }
