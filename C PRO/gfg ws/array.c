#include<stdio.h>
int main(){
    int arr[10],i,n,avg=0,sum=0;
    printf("enter the no. of elements: ");
    scanf("%d",&n);

    printf("enter the array no: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Average of the given array=%d",sum/n);
    return 0;

}