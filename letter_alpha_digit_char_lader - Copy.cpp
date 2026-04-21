#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter the letter:";
    cin>>n;
    if(n>='0' && n<='9')
   {
     cout<<"letter is Digit";
    }
    else if ((n>='a' && n<='z') || (n>='A' && n<='Z') )
    
    {
        cout<<"letter is character";
    }
    else 
    
    {cout<<"Special characetr";}
}