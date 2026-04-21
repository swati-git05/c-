#include<iostream>
using namespace std;
int main()
{
    int a , b, c;
    cout<<"enter the dividend:";
    cin>>a;
    cout<<"enter the divisor:";
    cin>>b>>c;

    cout<< ((a%b==0)? ((a%c==0)?"divisible by both":"not divisible by both"):"not disible by both");
    
}