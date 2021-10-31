/*
evaluation of arithmetic expression
*/
#include<stdio.h>
int main(){
    float a,b,c,d,e,f,g,s;
    printf("input values of a,b,c,d,e,f,g :");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
    s=((a-b/c*d+e)*(f+g));
    printf("solution of the given arithmetic expression is: %.2f",s);
    return 0;

}