/*
author: Alan Sabu
a simple calculator
*/
#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char op;
    cout<<"input the two numbers: ";
    cin>>a>>b;
    cout<<"input the operator: ";
    cin>>op;
    switch(op)
    {
        case '+': cout<<"a+b = "<<a+b;
        break;
        case '-': cout<<"a-b = "<<a-b;
        break;
        case '*': cout<<"a*b = "<<a*b;
        break;
        case '/': cout<<"a/b = "<<a/b;
        break;
        default: cout<<"invalid operator";
    }
    return 0;
}