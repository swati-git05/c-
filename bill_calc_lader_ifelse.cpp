#include<iostream>
using namespace std;
int main()
{
    int unit ,price;
    cout<<"enter the unit:";
    cin>>unit;
    if(unit>=0 && unit<=100)
    cout<<"price:"<<5*unit;
    else if(unit >=101 && unit <=200)
    cout<<"price:"<<7*unit;
    else if(unit>= 201 && unit<=300)
    cout<<"price:"<<10*unit;
    else
    cout<<"price:"<<12*unit;

}