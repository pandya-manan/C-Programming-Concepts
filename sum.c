#include<stdio.h>
int calcSum(int* a, int* b);
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    int result=calcSum(&a,&b);
    printf("The result is %d",result);
}

int calcSum(int* a, int* b)
{
    int result=0;
    int num1=*a;
    int num2=*b;
    result=num1+num2;
    return result;
}