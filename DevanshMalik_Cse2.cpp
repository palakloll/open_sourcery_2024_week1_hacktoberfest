#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"Enter any number:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=(2*num-1);j++)
        {
            if(j>i&&j<(2*num-i))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(i=num;i<=(2*num-1);i++)
    {
        for(j=1;j<=(2*num-1);j++)
        {
            if(j>=(2*num-i)&&j<=i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}