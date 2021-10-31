// Selection sort for arranging elements in ascending order

#include <iostream>

using namespace std;

int main()

{
    int AR[25], N, I, J, MIN, POS;

    cout<<"How many elements? ";

    cin>>N;

    cout<<"Enter the array elements: ";

    for(I=0; I<N; I++)

    cin>>AR[I];

    for(I=0; I < N-1; I++)

    {

        MIN=AR[I];

        POS=I;

        for(J = I+1; J < N-1; J++)

            if(AR[J]<MIN)

            {
                MIN=AR[J];

                POS=J;

            }

        if(POS != I)

        {

            AR[POS]=AR[I];

            AR[I]=MIN;

        }

    }

    cout<<"Sorted array is: ";

    for(I=0; I<N; I++)

    cout<<AR[I]<<"\t";

    return 0;
}