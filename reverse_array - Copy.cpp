#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the no. of array:";
    cin>>n;
    int arr[n];
    cout<<"array elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"reverse of array:";
    for(i=n-1;i>=0;i--)
    {
       cout<<arr[i]<<endl;
    }
    return 0;

}