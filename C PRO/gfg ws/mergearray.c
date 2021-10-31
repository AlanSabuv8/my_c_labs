#include<stdio.h>
int main(){
    int ar1[50],ar2[50],merge[50],i,j,size1,size2,sizeM;
    printf("enter the size of array 1: ");
    scanf("%d",&size1);
    printf("enter the no.s of array 1: ");
    for(i=0;i<size1;i++){
        scanf("%d",&ar1[i]);
    }
    printf("enter the size of array 2: ");
    scanf("%d",&size2);
    printf("enter the no.s of array 2: ");
    for(i=0;i<size2;i++){
        scanf("%d",&ar2[i]);
    }
    for(i=0;i<size1;i++){
        merge[i]=ar1[i];
    }
    sizeM=size1+size2;
    for(i=0,j=size1;i<size2;i++,j++){
        merge[j]=ar2[i];
    }
    printf("the merged array = ");
    for(i=0;i<sizeM;i++){
        printf("%d\n",&merge[i]);
    }
    return 0;
    

}