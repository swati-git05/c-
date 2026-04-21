#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"enter the number of rows and columns:";
    cin>>n>>m;
    
    cout<<"enter the array elements:";
    int a[n][m];
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
    }
for(j=0;j<m;j++)
    {
       for(i=0;i<n;i++)
       {
           cout<<a[i][j]<< " ";
       }
       cout<<endl;
    }


   




}    