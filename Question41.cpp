//write a program which accepts the user's first and last name and print them in reverse order with a space between them
#include<iostream>
using namespace std;
int main()
{
    string FName,LName;
    cout<<"enter a first name:";
    cin>>FName;
    cout<<"enter a last name:";
    cin>>LName;
    cout<<LName<<" "<<FName;
    return 0;

}
