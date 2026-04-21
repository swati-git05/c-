#include<iostream>
using namespace std;
int main()
{
    int a , b, c;
    cout<<"enter the dividend:";
    cin>>a;
    cout<<"enter the divisor:";
    cin>>b>>c;

    if(a%b==0)
    {
        if(a%c==0)
        cout<<"divisible by both";
        else 
        cout<<"not divisible by both";

    }
    else
    cout<<"not divisible by b";
}