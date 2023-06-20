#include<stdio.h>
int findMax(int numbers[]);
int findMin(int numbers[]);
int main()
{
    int numbers[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the number\n");
        scanf("%d",&numbers[i]);
    }

    int max=findMax(numbers);
    int min=findMin(numbers);

    printf("The maximum and the minimum in the array is %d %d\n",max,min);
    return 0;
    
    
}

int findMax(int numbers[])
{
    int max=numbers[0];
    for(int i=0;i<5;i++)
    {
        if(max<numbers[i])
        {
            max=numbers[i];
        }
    }
    return max;
}

int findMin(int numbers[])
{
    int min=numbers[0];
    for(int i=0;i<5;i++)
    {
        if(min>numbers[i])
        {
            min=numbers[i];
        }
    }
    return min;
}
