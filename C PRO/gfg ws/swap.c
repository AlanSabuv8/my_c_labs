#include<stdio.h>
void swap(int a, int b);
int main(){
    int m=33, n=99;
    printf("\nvalues before swapping m= %d n= %d",m,n);
    swap(m,n);
    return 0;
}

void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nvalues after swapping m= %d n= %d",a,b);
}