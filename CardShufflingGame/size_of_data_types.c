#include <stdio.h>
int main()
{
	int x;
	float f;
	double d;
	char c;

	typedef struct employee
	{
	int id;
	char *name;
	float salary;
        }e;

	printf("Size of the integer: %d bytes\n", sizeof(x));
	printf("Size of the float: %d bytes\n", sizeof(f));
	printf("Size of the double: %d bytes\n", sizeof(d));
	printf("Size of the Char: %d bytes\n", sizeof(c));
	printf("Size of the employee structure: %d\n", sizeof(e));
}
