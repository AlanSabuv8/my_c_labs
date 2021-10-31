
#include<stdio.h>
void main()
{
  int flag=1;
  char ch;
  while(1)
  {
    printf("input the character:");
    scanf("%c",&ch);  
    if(ch>='A' && ch<='Z'){
      printf("The character %c is capital letter\n",ch);
      getchar();
    }  
    else if(ch >= 'a' && ch <= 'z'){
      printf("The character %c is Small letter\n",ch);
      getchar();
    }
    else{
      printf("Wrong input\n");
      getchar();
    }
  }
}