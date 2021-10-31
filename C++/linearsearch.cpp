//Linear search to find an item in the array

#include <iostream>

using namespace std;

int main()

{

int AR[25], N;

int I, ITEM, LOC=-1;

cout<<"How many elements? ";

cin>>N;

cout<<"Enter the array elements: ";

for(I=0; I<N; I++)

cin>>AR[I];

cout<<"Enter the item you are searching for: ";

cin>>ITEM;
for(I=0; I<N; I++)

if(AR[I] == ITEM)

{

LOC=I;

break;

}

if(LOC!=-1)

cout<<"The item is found at position "<<LOC+1;

else

cout<<"The item is not found in the array";

return 0;
}
