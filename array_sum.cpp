#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n;

    cout<<"enter the number :";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
       cout<<"array elements:";
       cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"enter the addition:";
    cout<<sum;
    return 0;
}