/* Alan Sabu
roll no:206
assignment 1a qn 2
to check whether it is a prime number or not
*/
#include<stdio.h>
#include<math.h>
int main(){
    int p,s,i=2;
    printf("input the number:");
    scanf("%d",&p);
    s=sqrt(p);
    int flag=0;
    while(flag==0){
        if(s<i)
        {
            if (p==1){
                printf("%d is not a prime number",p);
                flag=1;
            }    
            else{    
                printf("%d is a prime number",p);
                flag=1;
            }    
        }
        else if(p%i==0)
        {
            printf("%d is not a prime number",p);
            flag=1;
        }
        else{ 
            i++;
        }    
    }    
    return 0;
}