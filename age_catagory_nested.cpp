#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age ";
    cin>>age;
    if(age<13)
    cout<<"child";
    else if(age>=13 && age<=19)
    cout<<"teenager";
    else if(age>=20 && age<=59)
    cout<<"adult";
    else cout<<"senior citizen";
}