#include<stdio.h>
#include<stdlib.h>
int main(){
    char w[100];
    FILE *fp;
    fp=fopen("file1.txt", "w");
    if (fp==NULL){
        printf("error opening the file");
        exit(1);
    }
    else{
        printf("\nInput the text to be written: ");
        fgets(w, 100, stdin);
        fprintf(fp, "%s", w);
    }
    printf("\nFile created and written successfully!!\n");
    fclose(fp);
}