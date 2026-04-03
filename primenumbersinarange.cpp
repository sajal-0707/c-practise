#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i,j;
    cout<<"Enter number 1:";
    cin>>a;
    cout<<"Enter number 2:";
    cin>>b;
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c+=1;
                break;
            }
            else
            {
                c=0;
            }
        }
        if(c==0)
        {
            cout<<i<<endl;
        }
        else if(c>0)
        {
            continue;
        }
    }
}