#include<iostream>
using namespace std;
int main()
{
  int n,i,sum=0;
  cout<<"enter the number to check:";
  cin>>n;

  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
        sum=sum+i;
    }
  }
  if(sum==n)
  {
    cout<<"number is perfect number";
  }
  else{
    cout<<"number is not perfect number";
  }


}