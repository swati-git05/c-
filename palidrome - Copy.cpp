#include<iostream>
using namespace std;

int main()
{
    int rev=0,rem,n;
    cout<<"enter the number :";
    cin>>n;
    int original=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==original)
    {
        cout<<"number is palidrome";
    }
    else 
    {
        cout<<"number is not palidrome";
    }

}
