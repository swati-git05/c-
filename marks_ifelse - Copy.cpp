#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the marks:";
    cin>>marks;

    if(marks>100 || marks<0)
    {
        cout<<"invalid marks";
    }

    else if(marks>=40)
    {
        cout<<"pass";
    }
    else
    {
        cout<<"fail";
    }

}