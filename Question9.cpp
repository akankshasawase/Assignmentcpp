//write a program to display operation of pre and post increament and decreament
# include<iostream>
using namespace std;
 int main()
 {
     int i=57;
     cout<<"The number is:"<<i<<endl;
     i++;
     cout<<"after post increment by 1 the no is:"<<i++<<endl;
     +i;
     cout<<"after pre increment by 1 the no is: "<<i<<endl;
     i=i+1;
     cout<<"after increasing by 1 the no is: "<<i<<endl;
     i--;
     cout<<"after post decrement by 1 the no is: "<<i--<<endl;
     -i;
     cout<<"after pre decrement by 1 the no is: "<<i<<endl;
     i=i-1;
     cout<<"after decreasing by 1 the no is: "<<i<<endl;

     return 0;
 }
