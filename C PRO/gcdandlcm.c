/* Alan Sabu
assignment 1 module 2 qn 2
to find gcd and lcm of two numbers
*/
#include<stdio.h>
int main(){
    int a,b,c,d,r;
    printf("input the two numbers:");
    scanf("%d%d",&a,&b);
    if (a>=b)
    {
        c=a,d=b;
    }
    else{
        c=b,d=a;
    }
    do
    {
        if(c==0 || d==0){
            break;
        }    
        r=c%d;
        c=d;
        d=r;

    }while(r!=0);
    int GCD=c;
    int LCM=(a*b)/GCD;
    printf("GCD=%d\n",GCD);
    printf("LCM=%d\n",LCM);
    return 0;    
}
