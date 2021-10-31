#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter the 3 numbers";
    cin>>x>>y>>z;
    if(x>y && x>z)
    {
        cout<<"the largest no. is "<<x;
    }
    else if(y>x && y>z)
    {
        cout<<"the largest no. is "<<y;
    }
    else
    {
        cout<<"the largest no. is "<<z;
    }
    return 0;
}