#include<stdio.h>
#include<string.h>
int main(){

    FILE *fp;
    char d[40];
    fp= fopen("file1.txt", "w");
    if (fp== NULL){
        printf("unable to open");
    }
    else{
        printf("file opened successfully\n");

        while(fgets(d,40,fp)!=NULL){
            printf("%s",fp);
        }

        fclose(fp);
        printf("\ndata written successfully\nfile closed...\n");

    }
    return 0;
}