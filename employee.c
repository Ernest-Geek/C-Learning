//Using The struct keyword and the typedef keyword//
#include <stdio.h>
#include <string.h>
//Using The struct keyword//

struct employee
{
	char fname[10];
	char lname[10];
	int id;
	float salary;
};

int main()
{
      //Creating instance for employee structure
      struct employee emp1;
      strcpy(emp1.fname, "Micheal");
      strcpy(emp1.lname, "Vine");
      emp1.id = 123;
      emp1.salary = 50000;

      //print the content of the element
      printf("FirstName: %s\n", emp1.fname);
      printf("LastName: %s\n", emp1.lname);
      printf("Employee Id: %d\n", emp1.id);
      printf("Salary: %.2f\n", emp1.salary);
}
