/* Alan Sabu
assignment 1 module 2 qn 3
to check the colour of char
*/
#include<stdio.h>
int main(){
    char a;
    printf("input the character:");
    scanf("%s",&a);
    switch(a){
        case 'r':
            printf("red\n");
            break;
        case 'b':
            printf("blue\n");
            break;
        case 'g':
            printf("green\n");
            break;
        case 'y':
            printf("yellow\n");
            break;
        case 'o':
            printf("orange\n");
            break;
        case 'v':
            printf("violet\n");
            break;
        case 'i':
            printf("indigo\n");
            break;  
        default:
            printf("no colour\n");
            break;                      

    }
    return 0;
