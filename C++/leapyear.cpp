#include <iostream>
using namespace std;
int main()
{
int year ;
cout << "Enter the year (in 4-digits): ";
cin >> year;
if (year%100 == 0) // Checks for century year
{
if (year%400 == 0)
cout << "Leap year\n";
else
cout<< "Not a leap year\n";
}
else if (year%4 == 0)
cout << "Leap year\n";
else
cout<< "Not a leap year\n";
return 0;
}