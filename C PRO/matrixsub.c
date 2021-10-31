#include<stdio.h>
int main(){
    int i,j,k,a[100][100],b[100][100],sum[100][100],dif[100][100],mul[100][100],m,n,c;
    printf("enter the no. of rows in a and b: ");
    scanf("%d",&m);
    printf("enter the no. of columns in a and b: ");
    scanf("%d",&n);
    printf("\nenter the elements of matrix a: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nenter the elements of matrix b: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }
    printf("\n\nthe matrix a is : \n");
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
    }
    printf("\n\nthe matrix b is : \n");
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d\t",b[i][j]);
    }
    while (c!=4){
        printf("\n\n **MENU** \n\n 1.addition \n 2.substracion \n 3.multiplication \n 4.exit \n \n\n Enter the choice no: ");
        scanf("%d",&c);
        switch(c){
            case 1:{
                printf("\nthe matrix obtained by addition of a and b is : \n");
                for(i=0;i<m;i++){
                    for(j=0;j<n;j++)
                        sum[i][j]=a[i][j]+b[i][j];
                }
                for(i=0;i<m;i++){
                    printf("\n");
                    for(j=0;j<n;j++)
                        printf("%d\t",sum[i][j]);
                }
                break;
            }
            case 2:{
                printf("\nthe matrix obtained by substraction of a and b is : \n");
                for(i=0;i<m;i++){
                    for(j=0;j<n;j++)
                        dif[i][j]=a[i][j]-b[i][j];
                }
                for(i=0;i<m;i++){
                    printf("\n");
                    for(j=0;j<n;j++)
                        printf("%d\t",dif[i][j]);
                }        
                break;
            }
            case 3:{
                printf("\nthe matrix obtained by multiplication of a and b is : \n");
                for(i=0;i<m;i++){
                    for(j=0;j<n;j++){
                        mul[i][j]=0;
                        for(k=0 ; k<n ; k++){
                            mul[i][j]+=a[i][k]*b[k][j];
                        }    
                    }        
                }
                for(i=0;i<m;i++){
                    printf("\n");
                    for(j=0;j<n;j++)
                        printf("%d\t",mul[i][j]);
                }
                break;
            }
            case 4:{
                printf("\n The program is successfully terminated!!..\n");
                printf(" Thank you..\n");
                break;
            }
            default:{
                printf("\nInvalid choice!!\n");
                break;
            }    
        }
    }
    return 0;
    
}