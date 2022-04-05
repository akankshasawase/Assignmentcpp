//write a program to compute distance between two points on the surface of earth.
#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
     double d,la1,la2,lo2,lo1,er,r;
     cout<<"enter latitude of coordinate 1:";
     cin>>la1;
     cout<<"enter latitude of coordinate 2:";
     cin>>la2;
     cout<<"enter longitude of coordinate 1:";
     cin>>lo1;
     cout<<"enter longitude of coordinate 2:";
     cin>>lo2;
     r=3.14159/180;
     la1=la1*r;
     la2=la2*r;
     lo1=lo1*r;
     lo2=lo2*r;
     er=6371.01;
     d=er*acos((sin(la1)*sin(la2))+(cos(la1)*cos(la2)*cos(lo1-lo2)));
     cout<<"The distance between those point is:"<<d<<endl;
     return 0;
 }
