/* Alan Sabu
assignment 3 qn 3
Bubble sort
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int i,p,n,a[50],temp;
    printf("enter the no. of elements in the array: ");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++){
        printf("input the element no.%d:  ",i+1);
        scanf("%d",&a[i]);
    }
    printf("the array before sort:\n");
    for(i=0 ; i<n ; i++){
        printf("%d\t",a[i]);
    }
    i=1;
    while(i<n){
        p=0;
        while(p<n-i){
            if (a[p]>a[p+1]){
                temp=a[p];
                a[p]=a[p+1];
                a[p+1]=temp;
            }
            p++;
        }
        i++;
    }
    printf("\nthe sorted array is:\n");
    for(i=0 ; i<n ; i++){
        printf("%d\t",a[i]);
    }    
    return 0;
}