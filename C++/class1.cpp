#include<iostream>
using namespace std;

class arithmetic{
    private:
        float a,b,result1,result2,result3,result4;

    public:
        arithmetic(float x,float y){
            a=x;
            b=y;
            result1=a+b;
            result2=a-b;
            result3=a*b;
            result4=a/b;
        }
        void addition(){
            cout<<a<<"+"<<b<<" = "<<result1;
        }  
        void substraction(){
            cout<<a<<"-"<<b<<" = "<<result2;
        }  
        void multiplication(){
            cout<<a<<"*"<<b<<" = "<<result3;
        }
        void division(){
            cout<<a<<"/"<<b<<" = "<<result4;
        }

};
int main(){
    float a,b;
    char ch;
    cout<<"input the two numbers: ";
    cin>>a>>b;
    arithmetic obj(a,b);
    cout<<"\n\t\tOperator Menu";
    cout<<"\n\t1. Addition (+)";
    cout<<"\n\t2. Subtraction (-)";
    cout<<"\n\t3. Multiplication (*)";
    cout<<"\n\t4. Division (/)";
    cout<<"\n\t5. Exit (E)";
    cout<<"\nEnter Option number or operator: ";
    cin>>ch;
    switch(ch)
    {
        case '1' :
        case '+' : obj.addition();
            break;
        case '2' :
        case '-' : obj.substraction();
            break;
        case '3' :
        case '*' : obj.multiplication();
            break;
        case '4' :
        case '/' : obj.division();
            break;
        case '5' :
        case 'E' :
        case 'e' : cout<<"program terminated!!";
            break;
        default : cout<<"Invalid Choice!!";
    }
    return 0;

}
