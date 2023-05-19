#include <stdio.h>
#include <string.h>
typedef struct employee { //modification here
 char fname[10];
 char lname[10];
 int id;
 float salary;
} emp; //modification here
int main()
{
 //create instance of employee structure using emp
 emp emp1; //modification here
 //assign values to members
 strcpy(emp1.fname, "Michael");
 strcpy(emp1.lname, "Vine"); 
 emp1.id = 123;
 emp1.salary = 50000.00;
 //print member contents
 printf("\nFirst Name: %s\n", emp1.fname);
 printf("Last Name: %s\n", emp1.lname);
 printf("Employee ID: %d\n", emp1.id);
 printf("Salary: $%.2f\n", emp1.salary);
} //end main
