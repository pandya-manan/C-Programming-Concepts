#include<stdio.h>
int main()
{
    int arr[5]={5,10,15,20,25};
    int i;
    for(i=0;i<5;i++)
    {
        printf("Value of array [%d]= %d\t",i,arr[i]);
        printf("Address of array [%d] = %u\n",i,&arr[i]);

    }
    return 0;
}