/*******
 roll no: 206
 Alan Sabu
 assignment 5 qn2
 factorial of n nathural no.s
 ******/

#include<stdio.h>
int factorial(int n);
int main(){
    int n,ans;
    printf("input the number: ");
    scanf("%d",&n);
    ans=factorial(n);
    printf("%d",ans);
    return 0;
}

int factorial(int n){
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else 
        return(n*factorial(n-1)); 
}