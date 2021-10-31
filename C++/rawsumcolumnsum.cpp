// To find the row sum and column sum of a matrix

#include <iostream>

using namespace std;

int main()

{

int ar[10][10], rsum[10]={0}, csum[10]={0};

int m, n, row, col;

cout<<"Enter the number of rows & columns in the array: ";

cin>>m>>n;

cout<<"Enter the elements\n";

for(row=0; row<m; row++)

for(col=0; col<n; col++)

cin>>ar[row][col];

for(row=0; row<m; row++)
for(col=0; col<n; col++)

{

rsum[row] += ar[row][col];

csum[col] += ar[row][col];

}

cout<<"Row sum of the 2D array is\n";
for(row=0; row<m; row++)

cout<<rsum[row]<<"\t";

cout<<"\nColumn sum of the 2D array is\n";

for(col=0; col<n; col++)

cout<<csum[col]<<"\t";

return 0;

}
