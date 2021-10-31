// To accept n integers and print the largest among them

#include <iostream>

using namespace std;

int main()

{

int num, big, count;

cout<<"How many Numbers in the list? ";

cin >> count;

cout<<"\nEnter first number: ";

cin >> num;

big = num;

for(int i=2; i<=count; i++)

{

cout<<"\nEnter next number: ";

cin >> num;

if(num > big) big = num;

}

cout<<"\nThe largest number is " << big;

return 0;

}
