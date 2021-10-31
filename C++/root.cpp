#include <iostream>
#include <cmath> // to use sqrt()function
using namespace std;
int main()
{
    float a, b, c, root1, root2, d;
    cout<< "Enter the three coefficients: ";
    cin >> a >> b >> c ;
    if (a==0) // equivalent to if (a == 0)
        cout<<"Value of \'a \' should not be zero\n"
        <<"Aborting!!!!!\n";
    else
    {
        d =b*b-4*a*c; //beginning of else block
        if (d > 0)
        {
            root1 = (-b + sqrt(d))/(2*a);
            root2 = (-b - sqrt(d))/(2*a);
            cout<<"Roots are REAL and UNEQUAL\n";
            cout<<"Root1 = "<<root1<<"\tRoot2 = "<<root2;
         }
        else if (d == 0)
        {
            root1 = -b/(2*a);
            cout<<"Roots are REAL and EQUAL\n";
            cout<<"Root1 =" <<root1;
        }
        else
            cout<<"Roots are COMPLEX and IMAGINARY";
    } // end of else block of outer if
    return 0;
}