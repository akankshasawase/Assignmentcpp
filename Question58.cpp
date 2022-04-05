//write a program to add all numbers from 1 to a given number.
#include<iostream>
using namespace std;
void AddFun(int n)
{
    int total=0;
    for(int x=1;x<=n;x++)
    {
        total=total+x;
    }
    cout<<"\n Add 1to4:" <<total<<endl;
    cout<<"\n Add 1to100:"<<total;

}
int main()
{
    AddFun(4);
    AddFun(100);
   // cout<<"\n Add 1to4:" <<total<<endl;
   // cout<<"\n Add 1to100:"<<total;

    return 0;

}
