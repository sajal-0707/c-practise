#include <iostream>
using namespace std;
int main()
{
    float hr;
    string typ;
    int cost;
    cout<<"hours:";
    cin>>hr;
    cout<<"type of vehicle(car/bike/auto):";
    cin>>typ;
    if(typ=="car")
    {
        cost=30*hr;
        cout<<"ticket is of:"<<cost<<"\n";
    }
    else if(typ=="auto")
    {
        cost=20*hr;
        cout<<"ticket is of:"<<cost<<"\n";
    } 
    else if(typ=="bike")
    {
        cost=10*hr;
        cout<<"ticket is of:"<<cost<<"\n";
    }
    else
    {
        cout<<"entered wrong vehicle type!"<<"\n";
    }
    if(hr>=10)
    {
        cost+=100;
        cout<<"ticket price after penalty is:"<<cost;
    }
}