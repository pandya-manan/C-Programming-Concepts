#include<stdio.h>
#include<conio.h>
int choice;
int a,b,c;
void main()
{
    printf("Welcome to basic calculator\n");
    printf("1.Add two numbers\n");
    printf("2.Subtract two numbers\n");
    printf("3.Divide two numbers\n");
    printf("4.Multiply two numbers\n");
    printf("5.Get Remainder from division of two numbers\n");
    printf("Enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:c=a+b;
                printf("The sum of the two numbers is %d",c);
                break;
    }
}