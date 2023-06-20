#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int temp=num;
    int sum=0;
    while(temp>0)
    {
        int dig=temp%10;
        sum=sum+dig;
        temp=temp/10;
    }
    printf("The sum of the digits is %d",sum);
    return 0;
}