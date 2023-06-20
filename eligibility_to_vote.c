#include<stdio.h>
int age;
void main()
{
    printf("Enter the age of the person\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are eligible to vote as you are 18 or above 18");
    }
    else 
    {
        printf("You are not eligible to vote as you are below 18");
    }
}
