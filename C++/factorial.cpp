//To find the factorial of a number using for loop
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    double fact=1;
    cout<<"Enter the number: ";
    cin>>n;
    for (i=1; i<=n; ++i)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is " << fact;
    return 0;
}