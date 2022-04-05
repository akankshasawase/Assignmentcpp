//write a program to check whether given length of 3 side form a right triangle
#include<iostream>
#include<string>
using namespace std;
int main()
{
    double s1,s2,s3;
    char result;
    string s="not";
    do
    {
        cout<<"enter three sides:";
        cin>>s1>>s2>>s3;
        if(s3*s3==((s1*s1)+(s2*s2)))
        {
            s="";

        }
        cout<<"entered triangle is "<<s<<"rightangled: Do u wabt to check another(y/n):";
        cin>>result;

    }while(result!='n'&&result!='n');
    cin>>s1;
    return 0;

}

