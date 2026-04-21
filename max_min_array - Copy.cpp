#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements :";
   for(i=0;i<n;i++)
   {
    
    cin>>arr[i];
   }
   int max=arr[0];
   int min=arr[0];

   for(i=0;i<n;i++)
   {
    if(arr[i]>max)
    max=arr[i];
    if(arr[i]<min)
    min=arr[i];
   }
   cout<<"max of array:"<<max<<endl;
   cout<<"min of array:"<<min;

   return 0;

}