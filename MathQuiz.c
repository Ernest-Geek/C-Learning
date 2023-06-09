#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int response;
	int *answer;
	int *op1;
	int *op2;
	char *result;
	int x;

	srand(time(NULL));
	printf("\nMath Quiz\n\n");
	printf("Enter Number of problems: ");
	scanf("%d", &response);

/* Based on the number of questions the user wishes to take,
allocate enough memory to hold question data.*/

	op1 = (int *) calloc(response, sizeof(int));
	op2 = (int *) calloc(response, sizeof(int));
	result = (char *) calloc(response, sizeof(char));
	answer = (int *) calloc(response, sizeof(int));

	if (op1 == NULL || op2 == NULL || answer == NULL || result == NULL)
	printf("Out of Memory\n");
	return(1);// When the memory allocation is not successful
	
	//Display additional problems
	
	for (x = 0; x < response; x++)
	{
	op1[x] = rand() % 100;
	op2[x] = rand() % 100;

	printf("\n%d + %d = ", op1[x], op2[x]);
	scanf("%d", &answer[x]);

	if ( answer[x] == op1[x] + op2[x])
	result[x] = 'c';

	else
	result[x] = 'i';
	}

	printf("Quiz Results\n");
	printf("\nQuestion\tYour Answer\tCorrect\n");

	//Print the result of the quiz
	for (x = 0; x < response; x++)
	{
	if ( result[x] == 'c' )
	printf("%d + %d\t\t%d\t\tYes\n", op1[x], op2[x]);
	else
	printf("%d + %d\t\t%d\t\tYes\n", op1[x], op2[x]);
        }

	//free memory
	free(op1);
	free(op2);
	free(result);
	free(answer);
}
