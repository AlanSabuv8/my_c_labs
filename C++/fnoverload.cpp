#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

float area(float a)
{
    return(a*a);
}
float area(float a,float b,float c)
{
    float s;
    s=(a+b+c)/2;
    return(sqrt(s*(s-a)*(s-b)*(s-c)));
}
float area(float l,float b)
{
    return (l * b);
}
int main()
{
    float a,b,c,l;
    int ch;

    do
    {
        cout<<"\n\n ___Menu___ \n";
        cout<<"\n 1. Area of Square";
        cout<<"\n 2. Area of Triangle";
        cout<<"\n 3. Area of Rectangle";
        cout<<"\n 4. Exit";
        cout<<"\n\n Enter Your Choice no : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"\n Enter the length of Square : ";
                cin>>a;
                cout<<"\n Area of Square : "<<area(a);
                break;
            }
            case 2:
            {
                cout<<"\n Enter the lenth of 3 sides of the Triangle : ";
                cin>>a>>b>>c;
                cout<<"\n Area of Triangle : "<<area(a,b,c);
                break;
            }
            case 3:
            {
                cout<<"\n Enter the Length & Bredth of Rectangle : ";
                cin>>l>>b;
                cout<<"\n Area of Rectangle : "<<area(l,b);
                break;
            }
            case 4:
                exit(0);
            default:
                cout<<"\n Invalid Choice!!!.. ";
        }
    }while(ch!=4);
    return 0;
}