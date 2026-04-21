#include<iostream>
using namespace std;
int main()
{
    int n, i,original,count=0,  temp,rem,sum=0;
    
    cout<<"enter the nummber:";
    cin>>n;
      original=n;
    temp=n;
    while(temp>0)
    {
       count++;
       temp=temp/10;
    }
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        int power=1;
        for(i=1;i<=count;i++)
        {
            power=power*rem;
        }
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==original)
    {
        cout<<"number is armstrong ";
    }
    else 
    cout<<"not";
}