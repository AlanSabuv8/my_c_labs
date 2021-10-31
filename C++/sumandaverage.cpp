/*
Author:Alan Sabu
to find the sum and average of two numbers
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    float average;
    cout<<"enter the 3 numbers:";
    cin>>a>>b>>c;
    sum=a+b+c;
    cout<<"sum="<<sum;
    cout<<"\n";
    cout<<"average="<<sum/3;
    return 0;
}