//To input the scores of 5 students and display them in
//reverse order

#include <iostream>

using namespace std;

int main()

{

    int i, score[5];

    for(i=0; i<5; i++) // Reads the scores
    {

        cout<<"Enter a score: ";

        cin>>score[i];

    }

    for(i=4; i>=0; i--) // Prints the scores

    cout<<"score[" << i << "] is " << score[i]<<endl;

    return 0;

}
