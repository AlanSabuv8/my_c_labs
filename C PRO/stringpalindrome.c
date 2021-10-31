/*
206_Alan Sabu
assignment 4 qn.1
check a string is palindrome or not
*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int i,j,l,s;
    printf("input the string: ");
    scanf("%s",a);
    l=strlen(a);
    for(i=l-1,j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    b[j]='\0';
    s=strcmp(a,b);
    if (s==0){
        printf("\nThe given string is palindrome");
    }
    else{
        printf("\nThe given string is not palindrome");
    }
    return 0;
}