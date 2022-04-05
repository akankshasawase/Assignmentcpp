//write a program to which reads given integer n and prints a twin prime which has the maximum size among twin primeless than equals to n.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    const int primeNo=10005;
    bool primes[primeNo];
    for(int i=2;i!=primeNo;i++)
    {
        primes[i]=true;
    }
    for(int i=2;i!=int(sqrt(primeNo));i++)
    {
        if(primes[i])
        {
            for(int j=2;i*j<primeNo;++j)
            {
                primes[i*j]=false;

            }
        }
    }
    int n;
    cout<<"enter a integer:\n";
    cin>>n;
    cout<<"Twin primes are:\n";
    for(int i=n; i-2>=0;--i)
    {
        if(primes[i]&&primes[i-2])
        {
            cout<<i-2<<" "<<i<<endl;
            break;
        }
    }
    return 0;
}
