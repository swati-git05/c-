#include<iostream>
using namespace std;
int main()
{   
    int n,i;
    cout<<"enter the number:";
    cin>>n;
    if(n<=1)
    {
        cout<<" prime number";
        return 0;
    }
    for (i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime number";
            return 0;
        }
    }
    cout<<"prime number";
    return 0;
}