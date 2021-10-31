#include<stdio.h>
#include<string.h>
int main(){

    FILE *fp;
    char d[40]="this is just a sample text";
    fp= fopen("file1.txt", "w");
    if (fp== NULL){
        printf("unable to open");
    }
    else{
        printf("file opened successfully\n");

        if(strlen(d)>0){
            fputs(d,fp);
            fputs("\n",fp);
        }

        fclose(fp);
        printf("\ndata written successfully\nfile closed...\n");

    }
    return 0;
}