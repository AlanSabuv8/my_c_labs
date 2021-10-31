//to find the armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,num;
    float sum=0;
    cout<<"input the number: ";
    cin>>n;
    num=n;
    while(num!=0)
    {
        r=num%10;
        sum=sum+pow(r,3);
        num=num/10;
    }
    if(sum==n)
        cout<<n<<" is an armstrong number";
    else    
        cout<<n<<" is not an armstrong number";
    return 0;    
}