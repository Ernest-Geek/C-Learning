#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
int main()
{
	char *strGame[5] = {"ADELANGUAGEFERVZOPIBMOU",
		            "ZBPOINTERSKLMLOOPMNOCOT",
			    "PODSTRINGGDIWHIEEICERLS",
			    "YVCPROGRAMMERWQKNULTHMD",
			    "UKUNIXFIMWXIZEQZINPUTEX"};
	char answer[80] = {0};

	int displayed = 0;//Used to track whether the current word has been displayed
	int x;// set for loop counter
	int startTime = 0;//Stores the starting time of each word search

	system("cls");// Clears the console screen

	printf("\n\n\tWord Find\n\n");

	startTime = time(NULL);

       /**Loop through each grid**/
	for (x = 0; x < 5; x++)
	{
	if (displayed == 0)
	{
	printf("\nFind a word in: \n\n");
	printf("%s\n\n", strGame[x]);
	displayed = 1;
	}
	system("cls");

	printf("\nEnter word found: ");
	fgets(answer, sizeof(answer), stdin);
	/**This line reads the users input from the standard input stream(stdin) and stores it
	in the answer array. The (sizeof(answer) specifies the maximum number of characters to read. This prevents buffer overflow**/

        checkAnswer(strGame[x], answer);
	displayed = 0;
	startTime = time(NULL);
	}
}

//Function definition//
void checkAnswer(char *string1, char string2[])
{
	int x;
	/**Convert to uppercase to perform a valid comparism**/
	for (x = 0; x <= strlen(string2); x++)
		string2[x] = toupper(string2[x]);

	if (strstr(string1, string2) != 0 && string2[0] != 0)
	printf("\nGreat Job!\n");
	else
	printf("\nSorry, word not found!\n");
}
