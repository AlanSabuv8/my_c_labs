// Using global variables

#include<iostream>

using namespace std;

int global = 5;
// global variable

void display()

{

cout<<global<<endl;

}

int main()

{

display();

global = 10;

display();

}
