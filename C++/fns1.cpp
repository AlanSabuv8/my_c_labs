#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{

char str[30];
int len= 0;
gets(str);//input string
len= strlen(str);//quantity of string
cout<<"Length: "<<len;
cout<<endl;
cout << "Original String:\n"<< str<< endl;
cout<<"String in upper:\n";
for (int x=0; x<strlen(str); x++)
        putchar(toupper(str[x]));//cout charac
return 0;
}