#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
int main()
{
	char name1[] = "Ernest";
	char name2[] = "Ampene";
        /**Calling Function**/
	convertL(name1);
	convertU(name2);
}

/**function definition**/
void convertL(char *str)
{
	int x;

	for (x = 0; x <= strlen(str); x++)
	str[x] = tolower(str[x]);

	printf("\nFirst name converted to lower case is %s\n", str);
}/**end function definition for convertL**/

void convertU(char *str)
{
	int x;

	for (x = 0; x <= strlen(str); x++)
	str[x] = toupper(str[x]);

	printf("\nLast name converted to Upper case is %s\n", str);
}/**End second function definition**/
