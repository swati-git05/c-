#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the no. od array:";
    cin>>n;
    int a[n];
    cout<<"enter the array elements:";
   
    for(i=0;i<n;i++)
    {
         cin>>a[i];
    }
    int max,min;
    for(i=0;i<n;i++)
    {   max=a[0];
        if(a[i]>max)
        max=a[i];
        min=a[0];
        if(a[i]<min)
        min=a[i];

    }
    //cout<<"max:"<<max<<endl<<"min"<<min;
    int diff=max-min;
    cout<<"Difference :"<<diff;



   


}