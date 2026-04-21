#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"entre the no:";
    cin>>n;
    int a[n];
    cout<<"enter the array elemnts:";
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int small=a[0];
   int second=a[0];

   for(i=0;i<n;i++)
   {
    if(a[i]<small)
    {
        second=small;
        small=a[i];
    }
    else if(a[i]<second && a[i]!=small)
    {
        second=a[i];
    }

   }
   if(small==second)
   cout<<"not second small";
   else 
   cout<<"second small:"<<second;

}