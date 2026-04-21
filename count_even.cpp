#include<iostream>
using namespace std;
int main()
{

    int n,i,count=0;
    cout<<"enter the number of array:";
    cin>>n;
    int a[n];
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
        
    }
    cout<<"count:"<<count;
}