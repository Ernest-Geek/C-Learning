#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mainSCC.h"

int main()
{
	char myString[21] = {0};//it stores the users input for encryption and decryption
	int iSelection = 0;//it stores the users input for selection
	char key[21] = {0}// Array to store user-defined key
        
	srand(time(NULL));

	iRand = (rand() % 4) + 1;//seeds the random number generated based on the current time        
        while (iSelection != 4)
	{
	printf("\n\n1\tEncrypt Clear text\n");
	printf("2\tDecrypt Cipher Text\n");
	printf("3\tGenerate New key\n");
	printf("4\tQuit");
	scanf("%d", &iSelection);

	switch (iSelection)
	{
        case 1:
	printf("\nEnter one word as clear text to encrypt: ");
	scanf("%s", myString);
	encrypt(myString, iRand);
	break;

	case 2:
	printf("\nEnter cipher text to decrypt: ");
	scanf("%s", myString);
	decrypt(myString, iRand);
	break;

	case 3:
	printf("\nNew Key Generation: ");
	break;
	}// end switch statement
	}// end main statement
}

//Function definition
void encrypt(char sMessage[], char key[])
{
	int x = 0;

	//encrypt the message by shifitng each character ASCII value
	while (sMessage[x])
	{
	sMessage[x] = sMessage[x] ^ key[x % keyLength];
	x++;
	}// end loop
	x = 0;
	//print the encrypted message
	printf("\nEncrypted message is: ");
}
void decrypt(char sMessage[], char key[])
{
	int x = 0;

	//decrypt the message by shifting each character ASCII value
	while (sMessage[x])
	{
	sMessage[x] = sMessage[x] ^ key[x % keyLength];
	x++;
	}//end loop
	
	x = 0;
	//print the decrypted message
	while (sMessage[x])
	{
	printf("%c", sMessage[x]);
	x++;
	}//end loop
}
