//linear search

#include<stdio.h>
void main(){
  int i,j,s,n,A[50];
  printf("input the no. of elements in the array: ");
  scanf("%d",&n);
  printf("Input the elements of array: ");
  for(i=0; i<n; i++){
    scanf("%d",A+i);
  }
  printf("Input the no. to be searched: ");
  scanf("%d",&s);
  for(i=0; i<n ; i++){
    if(A[i]==s){
      printf("\nThe given no. is found at %d th position",i+1);
      break;
    }
  }
  if(i==n)
    printf("The no. not found...\n");

}