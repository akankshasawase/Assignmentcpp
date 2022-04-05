//write a program to read an intger n and prints the factorial of n,assume that n<=10
#include<iostream>
using namespace std;
int main()
{
    int n;
    long long factorial=1;
    cout<<"enter positive no:";
    cin>>n;
    if(n==0)
    {
     cout<<"Error";
    }
    else
    {
        for(int i=1;i<=n;++i)
        {
            factorial=factorial*i;

        }
        cout<<"factorial of" <<n <<"="<<factorial;
    }
    return 0;


}





