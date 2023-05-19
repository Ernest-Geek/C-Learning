#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char name[50] = {0};

	printf("Enter your name: \n");
        scanf("%s", name);

	int length = strlen(name);
	printf("Number of characters in your name is: %d\n", length);

	printf("Your name in uppercase is: ");
	for (int i = 0; i < length; i++)
	{
	printf("%c", toupper(name[i]));
        }
	printf("\n");
	return 0;
}
