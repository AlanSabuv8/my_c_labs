// Using local variables

#include<iostream>

using namespace std;

void func()

{

int age=19;

cout<<age;

}

int main()

{

int age =18;

cout<<"Age is: "<<age;

cout<<"\nAge is: ";

func();

return 0;

}