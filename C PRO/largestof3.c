/*
largest among 3 integers
*/
#include<stdio.h>
int main(){
    int a,b,c,big;
    printf("input the 3 integers a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b&&a>c? a:b>c? b:c);
    printf("lagest no. is %d",big);
    return 0;
    
}