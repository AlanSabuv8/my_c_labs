#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char str1[100], str2[50];
    cout<<"Enter the First String: ";
    gets(str1);
    cout<<"Enter the Second String: ";
    gets(str2);
    strcat(str1, str2);//string 2 get added to 1
    cout<<"\nString after Concatenation: "<<str1;
    cout<<endl;
    return 0;
}