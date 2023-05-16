#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "main.h"
int main()
{
	int num_dice;
	int dice_array[6];//Assuming maximun of 6 dice
	
	srand(time(NULL));//seed the random numbers
	
	printf("How many dice do you want to roll(1-6): \n");
	scanf("%d", &num_dice);

	if (num_dice < 1 || num_dice > 6)
	{
	printf("Invalid dice selection. Please choose a number between 1 and 6\n");
	return 0;
	}
       
	tossDie(dice_array, num_dice);
	int i;
	printf("Results: \n");
	for (i = 0; i < num_dice; i++)
	{
	printf("%d", dice_array[i]);
        }
	printf("\n");
	return 0;
}

//function definition//
void tossDie(int dice_array[], int num_dice)
{
	int i;
	for (i = 0; i < num_dice; i++)
	{
	dice_array[i] = rand() % 6 + 1;
	}
}

	
	
