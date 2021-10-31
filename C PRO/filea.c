#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[100], r[100];
    FILE *fp;
    fp=fopen("file1.txt", "a+");
    if (fp==NULL){
        printf("Error opening the file!!!\n");
        exit(1);
    }
    else{
        printf("\nEnter the text to be appended: ");
        fgets(a, 100, stdin);
        fprintf(fp, "%s", a);
    }
    fclose(fp);
    fp=fopen("file1.txt", "r");
    printf("\nContents of the file after appending: \n");
    while(fgets(r,sizeof(r),fp)!=NULL)
    {
        printf("%s",r);
    }
    fclose(fp);

}