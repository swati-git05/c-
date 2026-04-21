#include<iostream>
using namespace std;
int main()
{
    int a , b, c;
    cout<<"enter the dividend:";
    cin>>a;
    cout<<"enter the divisor:";
    cin>>b>>c;

    if(a%b== 0 && a%c==0)
    cout<<"number is divisible by "<<b<< " and "<<c<<endl;
    else 
    cout<<"not divisible";
}