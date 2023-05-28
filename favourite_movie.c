#include <stdio.h>
#include <stdlib.h>

#define Characters 80

int main()
{
	//Declaring a pointer to hold allocated memory
	char *favouriteMovie;
	//Using malloc to allocate memory for the strings
        favouriteMovie = (char *)malloc((Characters + 1) * sizeof(char));

	if(favouriteMovie == NULL)
	{
	printf("Out of memory! Exiting program");
        return 1;
	}

	printf("Enter your favourite movie: ");
	scanf("%80[^\n]", favouriteMovie);//Reads any line of text until a newline character is entered
         
	printf("\nYour favourite movie is: %s\n", favouriteMovie);

	//Free the allocated memory
	free(favouriteMovie);
	return 0;
}
