/*
sum of two numbers
*/
#include<stdio.h>
int main(){
    float a,b,sum;
    printf("input two numbers");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum of the given two no.s is %.2f",sum);
    return 0;
}