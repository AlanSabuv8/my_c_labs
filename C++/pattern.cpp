// To display a triangle of stars

#include<iostream>
using namespace std;
int main()
{
    int i, j;
    char ch = '*';
    for(i=1; i<=5; ++i) //outer loop
    {
        cout<< "\n" ;
        for(j=1; j<=i; ++j) // inner loop
            cout<<ch;
    }
    return 0;
}
