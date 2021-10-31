#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
char fname[50];
int ch;
int nl=0,nc=0,nw=-1;
fp=fopen("file1.txt","r");
if(fp==NULL)
{
    printf("Error opening file..");
    exit(1);
}
ch=getc(fp);
while(ch!=EOF)
{
    if(ch==' ' || ch=='\n'){
        nw++;
        if (ch=='\n') nl++;
    } 
    else nc++;
    ch=getc(fp);
}
fclose(fp);
printf("Number of lines=%d Number of words=%d ,Number of characters = %d,\n",nl,nw,nc);
printf("results are written into result.dat file..\n");
fp=fopen("result.txt","w");
fprintf(fp,"Number of lines=%d Number of words=%d ,Number of characters =%d,\n",nl,nw,nc);
fclose(fp);
}