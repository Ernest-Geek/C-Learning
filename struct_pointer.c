//Passing by reference
#include <stdio.h>
#include <string.h>
typedef struct employee
{
	int id;
	char name[10];
	float salary;
}emp;//Alias created by the typedef keyword

void processEmp(emp *);

int main()
{
	emp emp1 = {0,0,0};//creating instance for the structure
	emp *ptrEmp;// Create a pointer of structure type

	ptrEmp = &emp1; //Assign the address to the pointer of structure type

	processEmp(ptrEmp);// Calls the function

	printf("\nID: %d\n", ptrEmp->id);
	printf("name: %s\n", ptrEmp->name);
	printf("salary: %.2f\n", ptrEmp->salary);
}//end main

void processEmp(emp *e)
{
	e->id = 123;
	strcpy(e->name, "Ernest");
	e->salary = 650000.00;
}
