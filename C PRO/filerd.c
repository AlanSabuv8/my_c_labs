#include<stdio.h>
#include<stdlib.h>
int main(){
    char r[100];
    FILE *fp;
    fp=fopen("file1.txt", "r");
    if (fp==NULL){
        printf("\nError opening the file !!!");
        exit(1);
    }
    else{
        printf("\nContent of the file:\n\n");
        fgets(r, 100, fp);
        puts(r);
        printf("\n");
    }
    fclose(fp);
}