/* Alan Sabu
assignment 3 qn 2
to search element in an array using linear search
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int i,n;
    float a[50],s;
    printf("enter the no. of elements in the array: ");
    scanf("%d",&n);
    printf("input the number to be searched: ");
    scanf("%f",&s);
    for(i=0 ; i<n ; i++){
        printf("input the element no.%d:  ",i+1);
        scanf("%f",&a[i]);
    }
    for (i=0 ; i<n ; i++)
    {
        if (a[i]==s){
            printf("the given no. is in position no.%d",i+1);
            break;
        }    
    }
    if (i==n){
        printf("element not found");
    }
    return 0;
}



