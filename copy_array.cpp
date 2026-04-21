#include<iostream>
using namespace std;
int main()
{
    int i,n;

    cout<<"enter the number :";
    cin>>n;
    int a[n];
    cout<<"array elements:";
    for(i=0;i<n;i++)
    {
       
       cin>>a[i];
       
    }
    
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    cout<<"array a:";
    for(i=0;i<n;i++)
    {
       
       cout<<a[i]<<" ";
       
    }
    cout<<endl;
   cout<<"array b:";
    for(i=0;i<n;i++)
    {
       cout<<b[i];
    }
    
    
    return 0;
}