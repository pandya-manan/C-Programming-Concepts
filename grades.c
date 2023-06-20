#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of the student to get a grade\n");
    scanf("%d",&marks);
    switch (marks)
    {
        case 0 ... 34: printf("Sorry you have failed the exam. Please proceed for reattempt.");
                     break;
        case 35 ... 59: printf("You have obtained D grade");
                     break;
        case 60 ... 75:printf("You have obtained C grade");
                    break;
        case 76 ... 85:printf("You have obtained B grade");
                    break;
        case 86 ... 95:printf("You have obtained A grade");
                    break;
        case 96 ... 100:printf("You have obtained A+ grade");
                    break;
        default: printf("Please enter the valid marks");
    }
    return 0;
}