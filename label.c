#include<stdio.h>
void checkEvenOrOdd(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    checkEvenOrOdd(num);
    return 0;
}
void checkEvenOrOdd(int num)
{
    if (num%2==0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
    even: printf("The number %d is even",num);
          return;
    odd: printf("The number %d is odd",num);
         return;
}
