#include <stdio.h>
#include <string.h>

typedef struct employee
{
	int id;
	char name[20];
	float salary;
}e; //Alias Created
    
void processEmp(e); //Supply protoype with structure alias name

int main()
{
	e emp1 = {0,0,0}; //Initialize members

	processEmp(emp1);//Pass structure by value
	
	printf("\nID: %d\n", emp1.id);
	printf("Name: %s\n", emp1.name);
        printf("Salary: $%.2f\n", emp1.salary);
}

//Function definition
void processEmp(e emp) //Receives a copy of the structure
{
	emp.id = 123;
	strcpy(emp.name, "Ernest");
	emp.salary = 450000;
}
