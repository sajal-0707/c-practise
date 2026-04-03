#include<iostream>
using namespace std;

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a, b;
    cout<<"Enter two numbers to find maximum:";
    cin>>a>>b;
    int m=max(a,b);
    cout<<"max is "<<m;
}