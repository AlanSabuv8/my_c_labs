/*
Author:Alan Sabu
to find simple interest
 */

#include<iostream>
using namespace std;
int main()
{
    float SI,P,I,T;
    cout<<"enter the value of principal amount,interest rate,time:";
    cin>>P>>I>>T;
    SI=(P*I*T)/100;
    cout<<"simple interest="<<SI;
    return 0;
}
