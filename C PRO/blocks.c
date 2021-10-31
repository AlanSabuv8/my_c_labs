#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1; i<=100; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
        printf("prime no.");
    else
        printf("not a prime no.");
    return 0;
}    
        
