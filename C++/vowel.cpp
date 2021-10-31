#include <iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter the character to check: ";
cin>>ch;
switch(ch)
{
case 'A' :
case 'a' :
case 'E' :
case 'e' :
case 'I' :
case 'i' :
case 'O' :
case 'o' :
case 'U' :
case 'u' : cout<<"The given character is a vowel";
 break;
default : cout<<"The given character is not a vowel";
}
return 0;
}