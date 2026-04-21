#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number to check:";
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(i*i==n)
        {
            cout<<"perfect square number";
            return 0;
        }
      
    }
    
        cout<<"not perfect square number";
    
}