//write a program to find area and perimeter of rectangle.
# include<iostream>
using namespace std;
 int main()
 {
     int l,w,a,p;
     cout<<"enter length of rectangle:";
     cin>>l;
     cout<<"enter width of rectangle:";
     cin>>w;
     a=l*w;
     p=2*(l+w);
     cout<<"area of rectangle:"<<a<<endl;
     cout<<"Perimeter of rectangle:"<<p;
     return 0;
 }
