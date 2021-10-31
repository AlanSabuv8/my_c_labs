// To create a matrix with m rows and n columns

#include <iostream>

using namespace std;

int main()

{ 
    int m, n, row, col, mat[10][10];

    cout<< "Enter the order of matrix: ";

    cin>> m >> n;

    cout<<"Enter the elements of matrix\n";

    for (row=0; row<m; row++)

    for (col=0; col<n; col++)

    cin>>mat[row][col];

    cout<<"The given matrix is:";

    for (row=0; row<m; row++)

    {

        cout<<endl;

        for (col=0; col<n; col++)

        cout<<mat[row][col]<<"\t";

    }

    return 0;

}