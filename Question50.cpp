//write a program to add two binary numbers.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long b1,b2;
    int i=0,r=0;
    int sum[20];
    cout<<"enter 1st binary number:";
    cin>>b1;
    cout<<"enter 2nd binary number:";
    cin>>b2;
    while(b1!=0||b2!=0)
    {
        sum[i++]=(int)((b1%10+b2%10+r)%2);
        r=(int)((b1%10+b2%10+r)/2);
        b1=b1/10;
        b2=b2/10;
    }
    if(r!=0)
    {
        sum[i++]=r;

    }
    i--;
    cout<<"The sum of two binary number is:";
    while(i>=0)
    {
        cout<<(sum[i--]);

    }
    return 0;
}
