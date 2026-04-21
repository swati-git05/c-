#include<iostream>
using namespace std;
int main()
{
    int i=2,n;
    cout<<"enter the number:";
    cin>>n;
    if(n<=1)
    {
        cout<<"not prime";
        return 0;
    }
    while(i<=n/2)
    {
        if(n%i==0){
        cout<<"not prime";
        return 0;}
        i++;
    }
    cout<<"prime number";
    
}