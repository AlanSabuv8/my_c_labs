#include<stdio.h>
void main(){
    int i,j,r,s,t;
    for(i=0 ; i<5 ; i++){
        while(i<5)
            printf("\t");
            i++;
        printf("\n");
        for(j=0 ; j<i ; j++)
            printf("\t*");       
    }
    for(i=5 ; i>0 ; i--){
        printf("\n");
        for(j=0 ; j<i ; j++)
            printf("\t*");       
    }
    for(i=0 ; i<5 ; i++){
        printf("\n");
        for(j=0 ; j<i ; j++)
            printf("\t*");       
    }
    for(i=5 ; i>0 ; i--){
        printf("\n");
        for(j=0 ; j<i ; j++)
            printf("\t*");       
    }
}