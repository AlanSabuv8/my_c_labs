#include<iostream>

using namespace std;

int main( )

{

float cube (float);//define prototype

float x, y;

cout << "\nEnter a number: ";

cin >> x;

y = cube(x);//function call

cout <<"\nCube of "<<x<<" is "<< y;

return 0;

}

float cube( float a )//funtion definition

{

float n;

n = a*a*a ;

return ( n );

}
