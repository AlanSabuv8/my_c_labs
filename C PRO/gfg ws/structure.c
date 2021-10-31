#include<stdio.h>
#include<math.h>

struct student
{
    int age;
    int id;
    float cgpa;
    char name[20];
};

/*
      var                    members
                age  id  cgpa    name[20]
      str1      20    34  6.7    
      str2
*/
int main(){
    int a,b;
    struct student student1;
    student1.age=20;
    printf("%d",student1.age);

    return 0;
}
