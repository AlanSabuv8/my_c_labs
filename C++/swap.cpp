#include<iostream>

using namespace std;

int main( )

{

void swap(int &, int &);

int x=3, y=8;

cout << "\nOriginal values: \n";

cout << "x: "<<x<<"y:"<<y<<"\n";

swap( x, y );

cout <<"\nValues after swapping: \n";

cout << "x: "<<x<<"y:"<< y;

return 0;

}

void swap( int &a, int &b )

{

int temp;

temp = a;

a=b;

b=temp;

cout <<"\nSwapped Values: \n";

cout << "x: "<<a<<"y:"<< b;

}
