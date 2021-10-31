/* Alan Sabu
roll no:206
assignment 2 qn 1
volume of a sphere
*/
#include<stdio.h>
int main(){
    float r,v;
    printf("input the value of radius: ");
    scanf("%f",&r);
    v=(4*3.14*(r*r*r))/3;
    printf("Volume of the sphere= %.2f",v);
    return 0;
}