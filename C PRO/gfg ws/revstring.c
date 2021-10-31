#include<stdio.h>

char str[20];

void revstr(int i);

int main(){
    printf("enter the string: ");
    scanf("%s",str);
    revstr(0);
    return 0;
}

void revstr(int i){
    if (str[i]!='\0'){
        revstr(i+1);
    }
    printf("%c",str[i]);
}