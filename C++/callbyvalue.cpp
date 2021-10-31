#include<iostream>
using namespace std;
void change(int n)
{
n = n + 1;
cout << "n = " << n << '\n';
}
int main()//starts here
{
int x = 20;
change(x);//goes to 3rd line
cout << "x = " << x;
}