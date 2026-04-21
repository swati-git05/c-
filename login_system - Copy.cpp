#include<iostream>
#include<string>
using namespace std;
int main()
{
    string username;
    int password;
    cout<<"enter the username:";
    cin>>username;
    cout<<"enter the password:";
    cin>>password;
    if(username=="Swati")
    {
        if(password==1234)
        {
            cout<<"login successful";
        }
        else
        {
           cout<<"Invalid password";
        }

    }
    else
    {
        cout<<"Invalid username";
    }
 
}