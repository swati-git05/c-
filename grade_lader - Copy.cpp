#include<iostream>
using namespace std;
int main()

{
    int marks;
    cout<<"enter the marks:";
    cin>>marks;

    if(marks>=90)
    {
        cout<<"grade a";
    }
    else if(marks>=75)
    {
        cout<<"grade b";
    }
    else if(marks>=50)
    {
        cout<<"grade c";
    }
    else if(marks>=40)
    {
        cout<<"grade d";
    }
    else
    {
        cout<<"fail";
    }
}