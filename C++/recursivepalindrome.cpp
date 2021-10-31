#include <iostream>
using namespace std;
void reverse(int n, int &rev)
{
    if (n == 0) {
        return;
    }
 
    rev = rev * 10 + (n % 10);
    reverse(n / 10, rev);
}
int isPalindrome(int num)
{
    int rev = 0;
    reverse(num, rev);
    return (num == rev);
}
 
int main()
{
    int n;
    cout<<"input the number: ";
    cin>>n;
 
    if (isPalindrome(n)) {
        cout <<n<< " is a Palindrome";
    }
    else {
        cout <<n<< " is not a Palindrome";
    }
    return 0;
}



