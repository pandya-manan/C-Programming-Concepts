#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("The two numbers before swapping are %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The two numbers after swapping are %d %d\n",a,b);
    return 0;
}