//Pyramid Pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,space;
    space=3;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
    
        for(k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        space--;
        cout<<endl;
        
    }
}