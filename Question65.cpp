//write a program to display all the leap year between two given years.
#include<iostream>
using namespace std;
int main()
{
    int startyear,endyear,i;
    cout<<"enter start year:";
    cin>>startyear;
    cout<<"enter end year:";
    cin>>endyear;
    for(i=startyear;i<=endyear;i++)
    {
        if((0==i%4)&&(0!=i%100)||(0==i%400))
           {
               cout<<"\n Leap year is"<<i;
           }

    }
    return 0;

}
