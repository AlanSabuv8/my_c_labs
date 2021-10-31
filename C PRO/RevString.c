/*******
 roll no: 206
 Alan Sabu
 assignment 5 qn3
 reverse of a string
 ******/

#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    int i,j,l;
    printf("input the string: ");
    fgets(a,100,stdin);
    l=strlen(a);
    for(i=l-1,j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    b[j]='\0';
    puts(b);
}    