//bubble sort

#include<stdio.h>
void main(){
    int i,j,n,temp,A[50];
    printf("\nInput the no. of elements in the array:");
    scanf("%d",&n);
    printf("\nInput the elements of the array:");
    for(i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is:\n");
    for(i=0; i<n; i++){
        printf("%d\t",A[i]);
    }

}