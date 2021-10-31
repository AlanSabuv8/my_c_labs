#include<stdio.h>

struct child
{
    char name[10];
    int age;
};

struct parent
{
    char father[10];
    char mother[10];
    struct child c1;
    
};
int main(){
    struct child kev={"kevin",20};
    struct parent kevin={"father","mother","child",20};
    printf("")
    
}
