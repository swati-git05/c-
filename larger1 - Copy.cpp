#include<iostream>
using namespace std ;
int main()
{
    int a, b,c;
    cout<<"enter the first number :";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    cout<<"enter the third number:";
    cin>>c;
     if (a==b && b==c)
    cout<<"all are equal:"<<endl;
    else if (a>=b && a>=c)
    cout<<" a is greater"<<endl;
    else if (b>=a && b>=c)
    cout<<"b is greater"<<endl;
    else 
    cout<<"c is greater "<<endl;
    
}