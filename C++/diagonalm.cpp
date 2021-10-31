//To find the sum of major diagonal elements of a matrix

#include <iostream>

using namespace std;

int main()

{ int mat[10][10], n, i, j, s=0;

cout<<"Enter the rows/columns of square matrix: ";

cin>>n;

cout<<"Enter the elements\n";

for(i=0; i<n; i++)

for(j=0; j<n; j++)

cin>>mat[i][j];

cout<<"Major diagonal elements are\n";
for(i=0; i<n; i++)

{

cout<<mat[i][i]<<"\t";

s = s + mat[i][i];

}

cout<<"\nSum of major diagonal elements is: ";

cout<<s;

return 0;

}
