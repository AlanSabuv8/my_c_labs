#include<stdio.h>

char replace(char a[], char b[]){
    int i=0,j,l,n=0;
    while(a[i]!='\0'){
        for (i; a[i]!=' '; i++){
            for(j=0; b[j]!='\0'; j++){
                if (b[j]==a[i]){
                    l=i;
                    n++;
                }
                else
                    continue;
            }
        }
        i++;
    }
    printf("%d %d",l,n);
    if (n==0){
        printf("substring not found");
        return 0;
    }
    for(i=l+n-1, j=0; j<n; i--,j++){
        a[i]=b[j];
    }
    printf("output string= %s",a);
    return 0;
}
int main(){
    char s[100],c[100];
    printf("imput the string: ");
    fgets(s,100,stdin);
    printf("input the substring: ");
    fgets(s,100,stdin);
    replace(s,c); 
}
