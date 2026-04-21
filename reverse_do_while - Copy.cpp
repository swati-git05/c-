#include<iostream>
using namespace std;
int main()
{
    int n,rem,rev=0;
    cout<<"enter the number:";
    cin>>n;
    do
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    while(n>0);
    cout<<"reverse number:"<<rev;
}