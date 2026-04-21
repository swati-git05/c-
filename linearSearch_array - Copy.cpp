#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the no of elements:";
    cin>>n;
    int arr[n];
    int key;
    
    cout<<"array elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key:";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"found at index:"<<i;
            return 0;
        }
        
    }
    cout<<"not found";

}