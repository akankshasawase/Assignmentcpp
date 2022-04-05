//write a program to check whether a number is positive,negative or zero.
# include<iostream>
using namespace std;
 int main()
 {
     signed int num;
     cout<<"enter a number:";
     cin>>num;
     if(num>0)
     {
         cout<<"entered no is positive"<<endl;

     }
     else if(num<0)
     {
         cout<<"entered no is negative"<<endl;
     }
     else
     {
         cout<<"entered no is zero";
     }
     return 0;
 }
