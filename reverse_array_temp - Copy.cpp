#include<iostream>
using  namespace std;
int main()
{
    int i,n,temp;
    cout<<"enter the n:";
    cin>>n;
    int a[n];
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }

    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
       
    }
    cout<<"reverse array:";
    for(i=0;i<n;i++)
    {
         cout<<a[i]<<endl;
    }
}