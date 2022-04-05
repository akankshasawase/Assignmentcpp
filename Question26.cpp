//write a program to convert temprature in fahernheit to kelvin.
#include<iostream>
using namespace std;
 int main()
 {
     float k,f;
     cout<<"enter temprature in fahernheit:";
     cin>>f;
     k=(5.0/9)*(f-32)+273.15;
     cout<<"temprature in kelvin:"<<k;
     return 0;
 }

