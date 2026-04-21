#include<iostream>
using namespace std;
int main()
{
   int n,i,sum=0,rem;
   cout<<"enter the number:";
   cin>>n;
   int original=n;
   while(n>0)
   {  int fact=1;
      rem=n%10;

     for(i=1;i<=rem;i++)
     {
    fact=fact*i;
     }
     sum=sum+fact;
     n=n/10;
   }
  if(original==sum)
  {
   cout<<n<<" "<<"is strong number";

  }
  else
  cout<<"not strong";


return 0;
}