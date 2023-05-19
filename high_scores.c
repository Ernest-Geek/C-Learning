#include <stdio.h>
#include <string.h>

typedef struct scores
{
	char name[10];
	int score;
}s;

int main()
{
	//assigning the instance
	s highScores[3];
	int x;

	//assign value to members
	strcpy(highScores[0].name, "Ernest");
	highScores[0].score = 234556;

	strcpy(highScores[1].name, "Ampene");
	highScores[1].score = 34566;

	strcpy(highScores[2].name, "Junior");
	highScores[1].score = 4567;

	//Print Array Content
	printf("Top 3 high Scores\n");

	//looping through
	for (x = 0; x < 3; x++)
	printf("\n%s\t%d\n", highScores[x].name, highScores[x].score);
}
