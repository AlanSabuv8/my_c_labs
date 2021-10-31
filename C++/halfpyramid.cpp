// to print half pyramid
#include<iostream>
using namespace std;
int main()
{
    int i,j,raw=0;
    for(i=1 ; i<=5 ; i++)
    {
        cout<<"\n";
        raw++;
        for(j=1 ; j<=raw ; j++)
        {
            cout<<j<<" ";
        }

    }
    return 0;
}