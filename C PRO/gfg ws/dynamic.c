#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n=5;

    arr = (int*)malloc(n * sizeof(int));
    //arr=(int *)calloc(n, sizeof(int)); -initialize everything to zero
    arr[2]=6;
    printf("%d", arr[2]);

    arr = (* int)realloc(arr, 5 * sizeof(int));
    free(arr);

    return 0;
}