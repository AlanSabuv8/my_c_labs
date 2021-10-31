//average of n numbers of an array
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float sum=0;
    cout<<"enter the quantity of the array: ";
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cout<<"enter the number: ";
        cin>>a[i];
    }
    for(i=0 ; i<n ; i++)
    {
        sum=sum+a[i];
    }
    cout<<"the average of the array is "<<sum/n;
    return 0;

}