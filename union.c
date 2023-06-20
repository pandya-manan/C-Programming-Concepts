#include<stdio.h>
struct employee 
{
    int role;
    char name[20];
};
union employeeu 
{
    int role;
    char name[20];
};
int main()
{
    struct employee emp;
    union employeeu emp1;

    printf("Size of structure %d\n",sizeof(emp));
    printf("Size of union %d",sizeof(emp1));
}