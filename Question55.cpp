//write a program to check where given length of 3 side form a right triangle

#include<iostream>
#include<cmath>
using namespace std;

 int main()
 {
     int a,b,c;
     cout<<"enter 3 sides of right triangle:";
     cin>>a>>b>>c;
   if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
   {
    cout<<"yes";
   }
   else
  {
    cout<<"No";
  }
return 0;
 }
