// A program to illustrate exit() function.
#include <iostream>
using namespace std;
int main(void)
{
	cout<<"START";

	exit(0); // The program is terminated here

	// This line is not printed
	cout<<"End of program";
}