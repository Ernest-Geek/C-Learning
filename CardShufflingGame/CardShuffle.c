#include <stdio.h>
#include <string.h>
#include <time.h>
#include "main.h"
//define new data type
typedef struct deck
{
	char type[10];
	char used;
	int value;
}aDeck; //end type

int main()
{
	int x, y;
	aDeck myDeck[52];
	srand(time(NULL));
	//initialize structure array//
	for (x = 0; x < 3; x++)//indicates the 4 different suites for playing the card
	{
	for (y = 0; y < 13; y++)//indicates the 13 rank of each suites
	{
	switch(x)
	{
	case 0:
	strcpy(myDeck[y].type, "Diamonds");
	myDeck[y].value = y;
	myDeck[y].used = 'n';
	break;

	case 1:
	strcpy(myDeck[y + 13].type, "Clubs");
	myDeck[y + 13].value = y;
	myDeck[y + 13].used = 'n';
        break;

	case 2:
	strcpy(myDeck[y + 26].type, "Spades");
	myDeck[y + 26].value = y;
	myDeck[y + 26].used = 'n';
	break;

	case 3:
	strcpy(myDeck[y + 39].type, "Hearts");
	myDeck[y + 39].value = y;
	myDeck[y + 39].used = 'n';
	break;
	}
	}
	}
}

//Function definition//
void shuffle (aDeck *);
int main()
{
	int x, y;
	aDeck myDeck[52];
	 srand(time(NULL));
	 //Initialize structure array//
	 for (x = 0; x < 3; x++)//indicates the 4 different suites of playing the cards
	{
	for (y = 0; y < 13; x++)// It indicates 13 ranks of each suit
        {
	switch (x)
	{
	case 0:
	strcpy(myDeck[y].type, "Diamonds");
	myDeck[y].value = y;
	myDeck[y].used = 'n';
	break;

	case 1:
	strcpy(myDeck[y + 13].type, "Clubs");
	myDeck[y + 13].value = y;
	myDeck[y].used = 'n'
	break;

	case 2;
	strcpy(myDeck[y + 26].type, "Spades"):
	myDeck[y + 13].value = y;
	myDeck[y + 13].used = 'n'
	}
	}
	}
}

void shuffle ( aDeck * thisDeck )
{
	int x;
	int iRnd;
	int found = 0;

	system("cls");
	printf("\nYour five cards are: \n\n");

	while ( found < 5 )
	{
	iRnd = rand() % 51;
	if ( thisDeck[iRnd].used == 'n')
	{
	switch (thisDeck[iRnd].value)
	{
	case 12:
	printf("Ace of %s\n", thisDeck[iRnd].type);
	break;
	
	case 11:
	printf("King of %s\n", thisDeck[iRnd].type);
	break;

	case 10:
	printf("Queen of %s\n", thisDeck[iRnd].type);
	break;

	case 9;
	printf("Jack of %s\n", thisDeck[iRnd].type);
	break;

	default:
	printf("%d of ", thisDeck[iRnd].value + 2);
	printf("%s\n", thisDeck[iRnd].type);
	break;
	}

	thisDeck[iRnd].used = 'y';
	found = found + 1;
	}
	}
}
