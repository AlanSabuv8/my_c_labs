#include<stdio.h>
#include<conio.h>
int sum();
void main(){
    int c;
    printf("\n going to calculate sum of two numbers: ");
    c=sum();
    printf("%d",c);
    getch();
}
int sum(){
    int a,b,c;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    return (c);
} 