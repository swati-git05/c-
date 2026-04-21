#include<iostream>
using namespace std;
int main()
{
    int salary;
    cout<<"enter the salary:";
    cin>>salary;
    if(salary>=0)
    {
        if(salary<=250000)
        {
            cout<<"not tax";
        }
        else if(salary<=500000)
        {
            cout<<"tax:"<<0.05*salary;
        }
        else if(salary<=1000000)
        {
            cout<<"tax:"<<0.2*salary;
        }
        else
        {
           cout<<"tax:"<<0.3*salary;
        }
    }
    else{
        cout<<"not valid salary";
    }
}