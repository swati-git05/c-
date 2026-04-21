#include<iostream>
using namespace std;
int main()
{
    char op;
    int a,b;
    cout<<"enter the operator:";
    cin>>op;
    cout<<"enter the operator:";
    cin>>a>>b;

    if(op=='+')
    cout<<"addition:"<<a+b<<endl;
    else if(op=='-')
    cout<<"Subtraction:"<<a-b;
    else if(op=='*')
    cout<<"multiplication:"<<a*b;
    else if(op=='/')
    {
        if(b!=0)
        cout<<"division:"<<a/b;
        else 
        cout<<"not valid";
    }
    else
    cout<<"not valid operator";

}