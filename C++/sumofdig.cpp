#include <iostream>
using namespace std;
int sumofdigits(int);
int main()
{
  int n,s;
  cout<<"Input a number : " ;
  cin>>n;	   
  s=sumofdigits(n);	 
  cout <<"Sum of Digits of "<<n<<" is "<<s;
  return 0;
}

int sumofdigits(int n)
{
  int s=0,rem=0;
  while(n>0)
  {
     rem=n%10;
     s+=rem;	  	  
     n=n/10;
  }
  return s;
}