#include<iostream>
using namespace std;
int main()
{
    int n,count=0,rem=0;
    cout<<"enter the number:";
    cin>>n;
    while(n>0)
    {
        count++;
        rem=n%10;
        n=n/10;
    }
    cout<<"count:"<<count;
}