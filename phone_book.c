#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FRIENDS 5

typedef struct
{
	char name[50];
	char phone[20];
}Friend;

void printPhoneBook(const Friend friends[], int count);

int main()
{
	Friend phoneBook[MAX_FRIENDS] = {0};
	int count = 0;

	printf("Phone Book Program\n\n");

	while (count < MAX_FRIENDS)
	{
	printf("Enter friend's name (or 'exit' to quit): ");
	scanf("%s", phoneBook[count].name);

	if (phoneBook[count].name[0] == 'e' && phoneBook[count].name[1] == 'x' && phoneBook[count].name[2] == 'i' && phoneBook[count].name[3] == 't')
	{
	break;
        }

	printf("Enter friends phone number: ");
	scanf("%s", phoneBook[count].phone);

	count++;
	printf("\n");
        }  
        printf("\nPhone book entries: \n");
	printPhoneBook(phoneBook, count);

	return 0;
}	
	void printPhoneBook(const Friend friends[], int count)
        {
	for (int i = 0; i < count; i++)
	{
	printf("Name: %s\n", friends[i].name);
	printf("phone: %s\n", friends[i].phone);
	}
	}
