#include<stdio.h>
int main(){
    int i,j,rc,sum=0;
    int a[10][10];
    printf("enter the no. of rows and columns: \n");
    scanf("%d",&rc);
    printf("enter the elements: \n");
    for(i=0;i<rc;i++){
        for(j=0;j<rc;j++){
            scanf("%d",&a[i][j]);
            if(i==j){
                sum+=a[i][j];
            }
        }
    }
    printf("\n\nsum=%d",sum);
    return 0;
}