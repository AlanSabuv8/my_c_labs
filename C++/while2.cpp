#include<iostream>
using namespace std;
int main()
{
    int i=2,sum=0;
    while( i<= 20)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout<<"\nThe sum of even numbers up to 20 is: "<<sum;
    return 0;
}

