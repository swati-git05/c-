#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"enter the array number:";
    cin>>n;
    int a[n];

    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    { 
        int flag=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
            cout<<a[i]<<" ";
        }
    }
    
    




}
