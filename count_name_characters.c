#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
int main()
{
	char *name;//Allocating memory for the pointer
        
	name = (char *)calloc(MAX_LENGTH, sizeof(char *));

	if(name == NULL)
	{
	printf("Out of Memory! Exiting programme");
	return 1;
	}

	//Read the users name
	printf("Enter the users name: \n");
	scanf("%s", name);

        //count the number of characters
	int count = 0;
	while (name[count] != '\0')
	{
		count++;
	}

	//Print the number of characters
	printf("Number of characters in your name: %d", count);

	//free allocated memory
	free(name);
}//end main function
