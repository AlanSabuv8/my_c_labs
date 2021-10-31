/* Alan Sabu
roll no:206
assignment 1a qn 3
to check whether a number is armstrong or not
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int d=0,num,no,r;
    float sum=0;
    printf("input the number:");
    scanf("%d",&num);
    no=num;
    while(no!=0)
    {
        no=no/10;
        d=d+1;
    }
    no=num;
    while(no!=0)
    {
        r=no%10;
        sum=sum+pow(r,d);
        no=no/10;  
    }
    if(sum==num){
        printf("%d is an armstrong number",num);
    }    
    else{
        printf("%d is not an armstrong number",num);  
    }    
    return 0;
}
