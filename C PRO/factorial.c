#include<stdio.h>
int main(){
    int n,r,c,combination;
    printf("input the n and r:");
    scanf("%d%d",&n,&r);
    int nf=1;
    for(int i=1; i<=n; i++)
    {
        nf=nf*i;
    }
    int rf=1;
    for(int i=1; i<=r; i++)
    {
        rf=rf*i;
    }
    int nrf=1;
    for(int i=1; i<=(n-r); i++)
    {
        nrf=nrf*i;
    }
    combination=nf/(nrf*rf);
    printf("%d is the required answer",combination);
    return 0;

    
}