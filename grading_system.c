#include<stdio.h>
#include<conio.h>
int marks;
void main()
{
    printf("Enter the marks secured by the student\n");
    scanf("%d",&marks);
    if(marks==100)
    {
        printf("A+ Grade");
    }
    else if(marks>=80 && marks<100)
    {
        printf("A Grade");
    }
    else if(marks>=60 && marks<80)
    {
        printf("B Grade");
    }
    else if(marks>=40 && marks<60)
    {
        printf("C Grade");
    }
    else if(marks<40 && marks>=0)
    {
        printf("D Grade->FAIL->REATTEMPT THE EXAM->BACKLOG NOTED");
    }
    else
    {
        printf("Enter the marks between 0 and 100");
    }
}