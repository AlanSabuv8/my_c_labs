#include<stdio.h>
struct employee
{
    char name[100];
    int number;
    int experience;
    float salary;
};

int main(){
    int i,n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    struct employee emp[n];
    for(i=0; i<n; i++)
    {
        getchar();
        printf("\nEnter the details of employee %d",i+1);
        printf("\nName: ");
        fgets(emp[i].name,100,stdin);
        printf("\nNumber: ");
        scanf("%d",&emp[i].number);
        printf("\nYears of Experience: ");
        scanf("%d",&emp[i].experience);
        printf("\nSalary: ");
        scanf("%f",&emp[i].salary);
    }
    printf("\nEmployees having more than 5yr experience and salary less tha 25000 : \n");
    for (i=0; i<4; i++)
    {
        if(emp[i].experience>=5 && emp[i].salary<25000){
            printf("\n Name: %s\n Number: %d\n", emp[i].name, emp[i].number);
            printf("*--------------------------------*");
        }    
    }
    return 0;      
}
