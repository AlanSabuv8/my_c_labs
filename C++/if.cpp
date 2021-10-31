#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"enter your score:";
    cin>>score;
    if(score>=50)
    {
        cout<<"you passed";
    }
    else
    {
        cout<<"you failed";
    }
    return 0;
}