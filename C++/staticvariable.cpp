// Static variables in a Function

#include <iostream>

#include <string>

using namespace std;

void demo()

{

static int count = 0;//if const value doesnt change
// static variable only one initialisation

cout << count << " ";

count++;
/* value is updated and will be
carried to next function calls */

}

int main()

{

for (int i=0; i<5; i++)

demo();

return 0;

}