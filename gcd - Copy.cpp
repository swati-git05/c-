#include<iostream>
using namespace std;
int main()
{
    int a,b,i,gcd,min;
    cout<<"enter the number:";
    cin>>a>>b;
    if(a>b)
    min=b;
    else
    min=a;
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            
        }
    }
    
    cout<<"gcd:"<<gcd;
}