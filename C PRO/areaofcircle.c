/*
area of a circle
*/
#include<stdio.h>
int main(){
    float r,A;
    printf("input the radius of the circle:");
    scanf("%f",&r);
    A=3.14*r*r;
    printf("the area of the given circle is %.2f unit square",A);
    return 0;
}