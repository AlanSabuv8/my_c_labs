#include<stdio.h>
int main(){
    int size;
    int a[]={1,2,3,4,5,6,7,8,9,1,0,};
    size=sizeof(a)/sizeof(a[0]);
    printf("%d",size);
    return 0;
}