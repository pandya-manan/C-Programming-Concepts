#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int marks;
    int roll;
};
typedef struct student stud;
int main()
{
    stud student1;
    char name[50];
    printf("Enter the name of the student\n");
    fgets(name,50,stdin);
    strcpy(student1.name,name);
    printf("Enter the marks of the student\n");
    scanf("%d",&student1.marks);
    printf("Enter the roll number of the student\n");
    scanf("%d",&student1.roll);
    printf("The name, marks obtained and the roll number of the student is %s %d %d",student1.name,student1.marks,student1.roll);
    return 0;
}