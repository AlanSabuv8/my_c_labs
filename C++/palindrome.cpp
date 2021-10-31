// To check whether the given number is palindrome or not

#include <iostream>
using namespace std;
int main()
{
    int num, copy, digit, rev=0;
    cout<<"Enter the number: ";
    cin>>num;
    copy=num;
    while(num != 0)
    {
        digit = num % 10;
        rev = (rev * 10)+ digit;
        num = num/10;
    }
    cout<<"The reverse of the number is: "<<rev;
    if (rev == copy)
        cout<<"\nThe given number is a palindrome.";
    else
        cout<<"\nThe given number is not a palindrome.";
    return 0;
}