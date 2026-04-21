#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cout<<"enter the rows:";
    cin>>r;
    cout<<"enter the column:";
    cin>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}