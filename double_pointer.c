// C program to demonstrate pointer to pointer
#include <stdio.h>

int main()
{
	int var = 789;

	// pointer for var
	int* ptr2;

	// double pointer for ptr2
	int** ptr1;

    //triple pointer for ptr1
    int*** ptr3;

	// storing address of var in ptr2
	ptr2 = &var;

	// Storing address of ptr2 in ptr1
	ptr1 = &ptr2;

    ptr3 = &ptr1;
	// Displaying value of var using
	// both single and double pointers
	printf("Value of var = %d\n", var);
	printf("Value of var using single pointer = %d\n", *ptr2);
	printf("Value of var using double pointer = %d\n", **ptr1);
    printf("Value of var using triple pointer = %d\n",***ptr3);

    printf("%u\n",&var);
    printf("%u\n",*ptr2);
    printf("%u\n",*ptr1);
    printf("%u\n",*ptr3);

	return 0;
}
