// Traversal of an array
#include <iostream>
using namespace std;
int main()
{
    int a[10], i;
    cout<<"Enter the elements of the array :";
    for(i=0; i<10; i++)
        cin >> a[i];
    //for(i=0; i<10; i++)
      //  a[i] = a[i] + 1;//for change location
    cout<<"\nEntered elements of the array are..\n";
    for(i=0; i<10; i++)
        cout<< a[i]<< "\t";
    return 0;
}

