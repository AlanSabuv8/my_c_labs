#include<stdio.h>
#include<stdlib.h>
void main(){
    int r1,c1,r2,c2,i,j,k,a[10][10],b[10][10],mul[20][20];
    printf("Enter the no. of rows in matrix 1: ");
    scanf("%d",&r1);
    printf("Enter the no. of columns in matrix 1: ");
    scanf("%d",&c1);
    printf("Enter the no. of rows in matrix 2: ");
    scanf("%d",&r2);
    printf("Enter the no. of columns in matrix 2: ");
    scanf("%d",&c2);
    if (c1!=r2){
        printf("invalid no. of rows and columns!!!!");
        exit(0);
    }
    printf("\nenter the elements of matrix a: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nenter the elements of matrix b: \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    }
    printf("\n\nthe matrix a is : \n");
    for(i=0;i<r1;i++){
        printf("\n");
        for(j=0;j<c1;j++)
            printf("%d\t",a[i][j]);
    }
    printf("\n\nthe matrix b is : \n");
    for(i=0;i<r2;i++){
        printf("\n");
        for(j=0;j<c2;j++)
            printf("%d\t",b[i][j]);
    }
    printf("\nthe matrix obtained by multiplication of a and b is : \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            mul[i][j]=0;
            for(k=0 ; k<r2 ; k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }    
        }        
    }
    for(i=0;i<r1;i++){
        printf("\n");
        for(j=0;j<c2;j++)
            printf("%d\t",mul[i][j]);
    }
}