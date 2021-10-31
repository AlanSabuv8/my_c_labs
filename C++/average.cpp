//To find the average score of n students

#include<iostream>

using namespace std;

int main()

{

 int i, sum, score, n;

 float avg;

 cout << "How many students? ";

 cin >> n ;
 for( i=1, sum=0; i<=n; ++i)

 {

     cout << "Enter the score of student"<<i<<":";

     cin >> score;

     sum = sum + score;

 }

 avg = (float)sum / n;

 cout << "Class Average: " << avg;

 return 0;

}