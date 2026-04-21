#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,avg;
    cout<<"enter the number of array:";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    cout<<"average:"<<avg;
    return 0;


}