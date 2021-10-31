/*
206_Alan Sabu
assignment 4 qn.3
find no. of vowels,consonants,spaces in a string.
*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,len,vow=0,con=0,sp=0;
    printf("\ninput the string : ");
    fgets(a,100,stdin);
    len=strlen(a);
    for(i=0; a[i]!='\0'; i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
            a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            vow++;
        }
        else if ((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')){
            con++;
        }
        else if (a[i]==' '){
            sp++;
        }
    }
    printf("\nThe no. of\nVowels = %d\nConsonants = %d\nSpaces= %d\n",vow,con,sp);
    return 0;
}