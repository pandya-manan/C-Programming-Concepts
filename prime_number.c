#include<stdio.h>
int main()
{
    int flag=0;
    int num;
    printf("Enter the number which has to be checked if it's a prime number or not\n");
    scanf("%d",&num);
    int m=num/2;
    for (int i=2;i<m;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The entered number %d is a prime number");
    }
    else
    {
        printf("The entered number %d is not a prime number");
    }
return 0;
}