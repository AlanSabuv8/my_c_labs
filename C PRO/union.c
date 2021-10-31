/*******
 roll no: 206
 Alan Sabu
 assignment 6 qn2
 display address using union
 ******/

#include<stdio.h>

union address
{
    char house[50];
    char place[50];
    char dst[30];
    char st[30];
    int pin;
};

void main()
{
    union address p;
    printf("Enter the following details: \n");
    printf("House name: ");
    scanf("%s",&p.house);
    printf("\nHouse name: %s",p.house);
    printf("\nPlace: ");
    scanf("%s",&p.place);
    printf("\nPlace: %s",p.place);
    printf("\nDistrict: ");
    scanf("%s",&p.dst);
    printf("\nDistrict: %s",p.dst);
    printf("\nState: ");
    scanf("%s",&p.st);
    printf("\nState: %s",p.st);
    printf("\npincode: ");
    scanf("%d",&p.pin);
    printf("\nPINCODE: %d",p.pin);
}