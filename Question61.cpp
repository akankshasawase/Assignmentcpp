//write a program to replace all the lower case letter of given string with the corresponding letter
#include<iostream>
#include<algorithm>
using namespace std;
 int main()
 {
     string text;
     cout<<"enter a text:";
     getline(cin,text);
     transform(text.begin(),text.end(),text.begin(),::toupper);
     cout<<text<<endl;
     return 0;
 }
