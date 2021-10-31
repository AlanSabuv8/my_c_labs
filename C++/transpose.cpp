// To find the transpose of a matrix

#include <iostream>

using namespace std;

int main()

{ int ar[10][10], m, n, row, col;

cout<<"Enter the order of matrix: ";

cin>>m>>n;

cout<<"Enter the elements\n";

for(row=0; row<m; row++)

for(col=0; col<n; col++)

cin>>ar[row][col];

cout<<"Original matrix is\n";

for(row=0; row<m; row++)

{

cout<<"\n";
for(col=0; col<n; col++)

cout<<ar[row][col]<<"\t";

}

cout<<"\nTranspose of the entered matrix is\n";

for(row=0; row<n; row++)

{

cout<<"\n";

for(col=0; col<m; col++)

cout<<ar[col][row]<<"\t";

}

return 0;

}
