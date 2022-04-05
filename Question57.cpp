//write a program to print 3 highest number from given descending order list
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
    for(int i=6;i!=-1;--i)
    {
        cout<<num[i]<<" ";

    }
    cout<<endl;
    for(int i=6;i!=3;--i)
    {
        if(num[i]>num[i-1])
        {
           cout<<num[i]<<endl;
        }
    }
    return 0;
}
