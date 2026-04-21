#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cout<<"enter the number:";
    cin>>n;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if(n<=1)
    {
        cout<<"not prime number";
        //return 0;
    }
    else if(flag=1)
    {
        cout<<"not prime";
    }
    else
    cout<<"prime number";
    return 0;
}