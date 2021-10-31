/* Alan Sabu
roll no:206
assignment 2 qn 1
check odd or even
*/
#include<stdio.h>
int main(){
    int a;
    printf("input the integer value: ");
    scanf("%d",&a);
    if (a%2==0)
        printf("%d is an even number",a);
    else
        printf("%d is an odd number",a);
    return 0;        
}