//write a  program to convert temprature in kelvin to celsius.
#include<iostream>
using namespace std;
 int main()
 {
     float k,c;
     cout<<"enter temprature in kelvin:";
     cin>>k;
     c=k-273.15;
     cout<<"temprature in celsius:"<<c;
     return 0;
 }
