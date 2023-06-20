#include<stdio.h>
#include<string.h>
struct employee
{
    int roll;
    char name[100];
    int marks;
};
int main()
{
    struct employee emp;
    struct employee* ptr;
    printf("Enter the roll number of the student\n");
    scanf("%d",&emp.roll);
    printf("Enter the name of the student\n");
    char nameOfStudent[100];
    scanf("%s",&nameOfStudent);
    strcpy(emp.name,nameOfStudent);
    printf("Enter the total marks of the student\n");
    scanf("%d",&emp.marks);
    printf("The name, roll and marks of the student is %s %d %d\n",emp.name,emp.roll,emp.marks);
    

    ptr=&emp;

    printf("The name,roll and marks of the student is %s %d %d",ptr->name,ptr->roll,ptr->marks);

    return 0;
}