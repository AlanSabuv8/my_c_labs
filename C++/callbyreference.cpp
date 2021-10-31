#include<iostream>
using namespace std;
void change(int & n)
{
n = n + 1;
cout << "n = " << n << '\n';
}
int main()
{
int x=20;
change(x);
cout << "x = " << x;
}