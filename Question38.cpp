//write a program that takes a number as input and prints its multiplication table up to 10
# include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"enter a number:";
    cin>>num;
  for(i=1;i<=10;i++)
  {
     int x= num*i;
    cout<<num <<"*" <<i<<"="<<x<<endl;

  }
  return 0;

  }

