#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main()
{
    
	int integer;
	int *iPtr = &integer;

	int choice;
        do
	{
	printf("\n\tMenu Options\n");
	printf("1. Enter new integer value\n");
	printf("2. Print Pointer Address\n");
	printf("3. Print Integer Address\n");
	printf("4. Print Integer Value\n");
	printf("0.. Exit\n");
	printf("Enter your choice: \n");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
	enterNewIntegerValue(iPtr);
	break;

	case 2:
	printPointerAddress(iPtr);
	break;

	case 3:
	printIntegerAddress(iPtr);
	break;

	case 4:
	printIntegerValue(iPtr);
	break;

	case 0:
	printf("Exiting program. GoodBye!\n");

	default:
	printf("Invalid Selection. Please try again!\n");
	break;
	}
	}while (choice != 0);
return 0;
}

/*** Function definition**/
void enterNewIntegerValue(int *ptr)
{
	int newValue;
	printf("Enter a new integer variable: \n");
	scanf("%d", &newValue);
	*ptr = newValue;
}

void printPointerAddress(int *ptr)
{
	printf("Pointer address is: %p\n", (void *)ptr);
}

void printIntegerAddress(int *ptr)
{
	printf("Integer Address is: %p\n", (void *)&(*ptr));
}

void printIntegerValue(int *ptr)
{
	printf("Integer Value is: %p\n", (void *)ptr);
}
