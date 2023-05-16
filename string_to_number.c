#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str1 = "123.78";
	char *str2 = "55";

	float x;
	int y;

	printf("String 1 is %s\n", str1);
	printf("string 2 is %s\n", str2);

	x = atof(str1); //converting string one to a float
	y = atoi(str2); //converting string two to a float
	
	printf("String 1 converted to float is: %s\n", x);
	printf("Sring 2 converted to an integer is: %s\n", y);
}
