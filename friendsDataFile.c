#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *pRead;
	char fName[20] = {0};
	char lName[20] = {0};

	pRead = fopen("friends.dat", "r");

	if (!pRead)
	{
	printf("File contents cannot be displayed\n");

	else
	printf("\nFirst Name\tLast Name\n\n");
	fscanf(pRead, "%s %s", fName, lName);
	}

	while(!feof(pRead))
	{
	fprintf(pRead, "%s %s", fName, lName);
	}
	fclose(pRead);
}
