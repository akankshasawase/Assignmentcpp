//write a program to compute total and average
#include<iostream>
using namespace std;

 int main()
 {
     int a,b,c,avg,tot;
     cout<<"enter a 1st no:";
     cin>>a;
     cout<<"enter a 2nd no:";
     cin>>b;
     cout<<"enter a 3rd no:";
     cin>>c;
     tot=a+b+c;
     avg=tot/3;
     cout<<"total:"<<tot<<endl;
     cout<<"average:"<<avg;
     return 0;
 }
