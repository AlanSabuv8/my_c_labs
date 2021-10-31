#include<stdio.h>
#include<conio.h>
float largest(float b[],int n);
void main(){
    float a[5],p;
    for(i=0; i<5; i++){
        scanf("%f",&a[i]);
    }
    p=largest(a,5);
    printf("The largest value is %f",p);
    getch();
}

float largest(float b[], int n){
    float max=b[0];
    for(i=0; i<n; i++){
        if(max<b[i])
            max=b[i];
    }
    return(max);
    
}