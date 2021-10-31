//Program to find sum of two numbers

#include <iostream>

using namespace std;

int add(int, int);//prototype / 

int main()

{

 int sum;

 sum = add(100, 78);//actual parameter

 cout << "100 + 78 = " << sum << endl;

 return 0;

}

int add(int a, int b)

{

 return (a + b);

}

