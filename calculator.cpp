//Calculator
#include<iostream>
using namespace std;
int main()
{
    double a,b;
    char c;
    cout<<"Enter a number= ";
    cin>>a;
    cout<<"Enter operation(+, -, *, /)= ";
    cin>>c;
    cout<<"Enter a number= ";
    cin>>b;
    switch (c)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:
        break;
    }
}