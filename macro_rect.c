#include<stdio.h>
#define RECTANGLE(){\
    int l,b;\
    printf("Enter the length of the rectangle\n");\
    scanf("%d",&l);\
    printf("Enter the breadth of the rectangle\n");\
    scanf("%d",&b);\
    printf("The area of the rectangle is %d",(l*b));\
}
int main()
{
    RECTANGLE();
}
