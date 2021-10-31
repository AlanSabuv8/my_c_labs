/*
206_Alan Sabu
assignment 4 qn.2
concatenate 2 strings.
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int i,j,l1,l2;
    printf("\ninput string 1 : ");
    scanf("%s",str1);
    printf("\ninput string 2 : ");
    scanf("%s",str2);
    l1=strlen(str1);
    l2=strlen(str2);
    j=l1;
    for(i=0 ; i<=l2 ; i++,j++ ){
        str1[j]=str2[i];
    }
    printf("\nthe concatenated string = %s",str1);
    return 0;

}