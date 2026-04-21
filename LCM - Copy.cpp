#include<iostream>
using namespace std;
int main()
{
    int a,b,i,lcm,max;
    cout<<"enter the numbers:";
    cin>>a>>b;
    if(a>b)
    max=a;
    else
    max=b;

    for(i=max; ;i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
    }
    cout<<"lcm:"<<lcm;
}