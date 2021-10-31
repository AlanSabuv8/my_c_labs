//to print floyd's triangle
#include<iostream>
using namespace std;
int main()
{
    int i,j=1,raw=0,t;
    for(i=1 ; i<=4 ; i++)
    {
        t=0;
        cout<<"\n";
        raw++;
        do
        {
            cout<<j<<" ";
            t++;
            j++;
        }while(t<raw);
    }
    return 0;
}