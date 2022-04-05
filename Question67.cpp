//write a program to convert a given number into hours and minutes.
#include<iostream>
#include<string>
using namespace std;
void TimeConvert(int num)
{
    bool flag;
    int hr=0;
    do
    {
        flag=false;
        if(num>=60)
        {
            hr++;
            num=num-60;
            flag=true;
        }
    }while(flag);
    cout<<"\n H: M"<<" "<<hr<<":"<<" "<<num<<endl;
}
int main()
{
    TimeConvert(67);
    TimeConvert(60);
    TimeConvert(120);
    TimeConvert(40);
    return 0;
}

