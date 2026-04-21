#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n>=0)
    {
        if(n%2==0)
        cout<<"positive even";
        else 
        cout<<"poitive odd";
    }
    else 
    {
        if(n%2==0)
        cout<<"negative even";
        else 
        cout<<"negatiive odd";
    }
}