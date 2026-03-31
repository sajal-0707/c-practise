// Prime number
#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"enter a number a:";
    cin>>a;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            b+=1;
            break;
        }
        else
        {
            b=0;
        }
    }
    if(b>=1)
    {
        cout<<"composite";
    }
    else if(b==0)
    {
        cout<<"prime";
    }
}