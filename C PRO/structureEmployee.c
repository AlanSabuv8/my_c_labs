/*******
 roll no: 206
 Alan Sabu
 assignment 5 qn1
 employee details using structure
 ******/

#include<stdio.h>
struct employee
{
    char name[100];
    char id[100];
    char designation[100];
    float salary;
}emp[3];

int main(){
    int i;
    for(i=0; i<4; i++)
    {
        printf("\nEnter the details of employee %d\n",i+1);
        printf("\nName: ");
        fgets(emp[i].name,100,stdin);
        printf("\nID: ");
        fgets(emp[i].id,100,stdin);
        printf("\nDesignation: ");
        fgets(emp[i].designation,100,stdin);
        printf("\nSalary: ");
        scanf("%f",&emp[i].salary);
        getchar();
    }
    printf("\nEmployee Details: \n");
    for (i=0; i<4; i++)
    {
        printf("\n Name: %s\n ID: %s\n Designation: %s\n Salary: %f\n", emp[i].name, emp[i].id, emp[i].designation, emp[i].salary);
        printf("*--------------------------------*");
    }
    return 0;      
}
