//write a program to convert temprature in kelvin to fahernheit
#include<iostream>
using namespace std;
 int main()
 {
     float k,f;
     cout<<"enter temprature in kelvin:";
     cin>>k;
     f=(9.0/5)*(k-273.15)+32;
     cout<<"temprature in fahernheit:"<<f;
     return 0;
 }
