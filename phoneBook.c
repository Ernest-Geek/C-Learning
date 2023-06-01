#include <stdio.h>
#include <stdlib.h>
#include "phoneBook.h"
#include <string.h>

#define MAX_PHONE_LENGTH 50
#define MAX_NAME_LENGTH 15

//Structure type
typedef struct 
{
	char name[MAX_PHONE_LENGTH];//Variable of name with data type char with an array containing the maximum length.
	char phone[MAX_PHONE_LENGTH];//Variable phone of data type char with an array containing the maximum length.
}Contact; //Alias created

int main()//Main function
{
        contact *phoneBook = NULL;//initializing phonebook variable as a pointer to contact and set it to NULL
	int numEntries = 0;// Variable numEntries of data type int and set it tO 0
	int choice;// Variable choice of data type int

	while(1)// This program runs until an external execution
	{
	printf("\nPhone Book Menu: \n");
	printf("1. Add Entry\n");
	printf("2. Modify Entry\n");
	printf("3. Print phone Book\n"+);
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
	case 1:
	addEntry(&phoneBook, &numEntries);
	break;

	case 2:
        modifyEntry(phoneBook, numEntries);
	break;

	case 3:
	printPhoneBook(phoneBook, numEntries);
	break;

	case 4:
	freePhoneBook(phoneBook);
	break;

        default:
	printf("Invalid Choice. Please Try Again\n");
	}
	}

	void addEntry(Contact** phoneBook, int *numEntries)// 
{
	Contact newEntry;

	printf("Enter name: ")
	scanf("%s", newEntry.name);

	printf("Enter your phone number: ");
	scanf("%s", newEntry,phone);

	*phoneBook = realloc(*phoneBook, (*numEntries + 1) * sizeof(Contact));

	if (*phoneBook == NULL)
	{
	printf("Memory Allocation error! Exiting program\n");
	return (1);
	}

	(*phoneBook)[*numEntries] = newEntry;
	(*numEntries)++;

	printf("Entry added succesfully\n");
}

void modifyEntry(Contact *phoneBook, int numEntries)
{
	int i;//Used for the loop counter
	char seacrhName[MAX_NAME_LENGTH];//Stores the users search nameh

	printf("Enter the name to modify: ");
	scanf("%s", searchName);

	for (i = 0; i < numEntries; i++)
	{
	if (strcmp(phoneBook[i].name, searchName) == 0)
	{
	printf("Enter new phone number: ");
	scanf("%s", phoneBook[i].name);
	printf("Entry modified successfully.\n");
	return;
	}
	}

	printf("Entry not found.\n");
}

void printPhoneBook(Contact* phoneBook, int numEntries)
{
	int i;

	if (numEntries == 0)
	{
	printf("Phone Book is empty.\n");
	return;
	}

	printf("\nPhone Book Entries: ");

	for (i = 0; i < numEntries; i++)
	{
	printf("Name: %s\n", phoneBook[i].name);
	printf("Phone: %s\n", phoneBook[i].phone);
	printf("-----------------\n");
        }
}
