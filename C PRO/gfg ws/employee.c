#include<stdio.h>

struct employee
{
    char name[30];
    int empid;
    float salary;
};


int main(){
    int n;
    printf("enter the no.of employees: ");
    scanf("%d",&n);
    struct employee emp[n];
    for(int i=0;i<n;i++){
        printf("Enter the details\n");

        printf("name: ");
        gets(emp[i].name);
    
        printf("enter employee id: ");
        scanf("%d",&emp[i].empid);

        printf("enter the salary: ");
        scanf("%f",&emp[i].salary);
    }    
    
    printf("Entered details:  \n ");
    for(int i=0; i<n ;i++){    
        printf(" %s   %d  %f",emp[i].name[30],emp[i].empid,emp[i].salary);
    }
    return 0;
}