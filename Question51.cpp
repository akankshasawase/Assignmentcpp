//write a program to swap first and last digit.
#include<iostream>
#include<cmath>
using namespace std;

 int main()
 {
     int n,firstdigit,lastdigit,digits,swappedNo;
     cout<<"Enter a number:";
     cin>>n;
     lastdigit=n%10;
     digits=(int)log10(n);
     firstdigit=(int) (n/pow(10,digits));
     swappedNo=lastdigit;
     swappedNo *=(int)round(pow(10,digits));
     swappedNo+=n%(int)round(pow(10,digits));
     swappedNo-=lastdigit;
     swappedNo+=firstdigit;
     cout<<"Number after swapping first and last digit:"<<swappedNo;
     return 0;

 }
