//largest element of an array
#include<iostream>
using namespace std;
int main()
{
    int n,i,temp;
    cout<<"enter the quantity of array: ";
    cin>>n;
    int a[n];
    for(i=0; i<n ; i++)
    {
        cout<<"enter the number: ";
        cin>>a[i];
    }
    for(i=0; i<n ; i++)
    {
        if(a[i]>a[i+1]){
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=a[i+1];
        }    
    }
    cout<<"the largest no. is "<<a[n-1];
    return 0;

}