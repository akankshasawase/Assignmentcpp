//write a program to read seven numbers and sort them in descending order
#include<iostream>
#include <string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int num[7];
    for(int i=0;i!=7;i++)
    {
        cout<<"Enter a number for array: ";
        cin>>num[i];
    }
   std:: sort(num,num+7);
    for(int i=6;i!=0;--i)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}
