#include<iostream>
using namespace std;
int main()
{
    int n,i=1,fact=1;
    cout<<"enter the number:";
    cin>>n;
    do
    {
        fact=fact*i;
        i++;

    }
    while(i<=n);
    cout<<"factorial:"<<fact;
}