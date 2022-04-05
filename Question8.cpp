//write a program to check overflow/underflow during various arithmetic operation//
#include<iostream>
using namespace std;
 int main()
 {
     cout<<"Range of interger is[-2147483648,2147483647]"<<endl;
     int n1=2147483647;
     cout<<"overflow the integer range and set minimum range:"<<n1+1<<endl;
     cout<<"Increase from its minimum range:"<<n1+2<<endl;
     cout<<"product is:"<<n1*n1<<endl;

     int n2=-2147483648;
     cout<<"Underflow the integer range and set maximum range:"<<n2+1<<endl;
     cout<<"Increase from its minimum range:"<<n2+2<<endl;
     cout<<"product is:"<<n2*n2<<endl;
     return 0;
 }
