//write a program to calculate area of an equilateral triangle
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
  float s,area;
  cout<<"enter the value of side of equilateral triangle:";
  cin>>s;
  area=sqrt(3)/4*(s*s);
  cout<<"Area of equilateral triangle is:"<<area<<endl;
  return 0;


}
