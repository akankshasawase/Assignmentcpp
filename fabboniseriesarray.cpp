#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n;
    cout<<"enter number of fibonaccii terms required:"<<endl;
    cin>>n;
    a[0]=0;
    a[1]=1;

    for(i=2;i<n;i++)

        a[i]=a[i-1]+a[i-2];
        cout<<"\n Required"<< n <<"fibonaccii terms are:"<<endl;


    for(i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    return 0;
}


