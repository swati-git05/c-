#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the operand:";
    cin>>a>>b;
   
   
    cout<<"1.addition:"<<"\n";
    cout<<"2.subtraction:"<<"\n";
    cout<<"3.multiplication:"<<"\n";
    cout<<"4.dividion:"<<"\n";
    int op;
     cout<<"enter choice";
     cin>>op;

    switch(op)
    {
        case 1:
        cout<<"additon:"<<a+b;
        break;

        case 2:
        cout<<"subtraction:"<<a-b;
        break;

        case 3:
        cout<<"multiplication:"<<a*b;
        break;

        case 4:
        if(b!=0)
        cout<<"division:"<<a/b;
        else
        cout<<"not valid b";
        break;

        default:
        cout<<"not valid case";

    }
    return 0;
}