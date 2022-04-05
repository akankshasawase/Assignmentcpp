//write a program to compute the sum of given two intergers and count number of digits of sum value.
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter two integers:";
    cin>>x;
    cin>>y;


        stringstream str1;
        str1<<x+y;
        cout<<"No of digit of sum value is:"<<str1.str().size()<<endl;

    return 0;
}
