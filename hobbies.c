#include <stdio.h>
//function prototype
void readData(void);

int main()
{
	FILE *pWrite;
	char name[10];
	char hobby[15];

	printf("\nCurrent file contents are: \n");

	readData();

	printf("\nEnter a new name and hobby: \n");
	scanf("%s%s", name, hobby);

	//open file for append
	pRead = fopen("hobbies.dat", "a");

	if (!pWrite)
	printf("Contents cannot be displayed");

	else
        {
	//append record information to data file
	fprintf(pWrite, "%s%s\n", name, hobby);
	fclose(pWrite);
	readData();
	}
}

void readData(void)
{
	FILE *pRead;
	char name[10];
	char hobby[15];

	//open data file for read access only
	pRead = fopen("hobbies.dat", "r");

	if (pRead == NULL)
	printf("\nFile cannot be displayed\n")

        else
	printf("\nName\tHobby\n\n", name, hobby);
	fscanf(pRead, "%s%s", name, hobby);

	//read records from data file until end of file is read
	while(!feof(pRead))
	{
	printf("%s\t%s\n", name, hobby);
	fscanf(pRead, "%s%S", name, hobby);
	}
	fclose(pRead);
}


