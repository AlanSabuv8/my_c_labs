/* Alan Sabu
assignment 3 qn 1
to find sum and average of an array
*/

#include<stdio.h>
int main(){
    int n;
    float a[n],sum=0,average;
    printf("enter the no. of elements in the array: ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        printf("input the element no.%d:  ",i+1);
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum of the given array = %.2f\n",sum);
    average=sum/n;
    printf("The average of the given array = %.2f\n",average);
    return 0;
}