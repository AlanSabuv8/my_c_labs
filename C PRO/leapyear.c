/* Alan Sabu
assignment 1 module 2 qn 1
to find leap year
*/
#include<stdio.h>
int main(){
    int y;
    printf("input the year:");
    scanf("%d",&y);
    if (y%400==0)
    {    
        printf("%d is a leap year",y);
    }    
    else if(y%100==0)
    {
        printf("%d is not a leap year",y);
    }    
    else if(y%4==0)
    {
        printf("%d is a leap year",y);
    }
    else
    {
        printf("%d is not a leap year",y);
    }    
    return 0;                
}