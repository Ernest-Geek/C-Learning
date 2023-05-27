#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct car
{
	char make[20];
	char model[20];
	int year;
	int mile;
}cars;

int main()
{
int x;
// Create an instance of the car structure
cars MyCars[3];

strcpy(myCars.make[0], "Toyota");
strcpy(myCars.model[0]. "Camry");
myCars.year = 2000;
myCars.miles = 30000;

strcpy(myCars.make[1], "Toyota");
strcpy(myCars.model[1]. "Camry");
myCars.year = 2000;
myCars.miles = 30000;

strcpy(myCars.make[2], "Toyota");
strcpy(myCars.model[2]. "Camry");
myCars.year = 2000;
myCars.miles = 30000;

for ( x = 0; x < 3; x++)
printf("Cars: %s\n", x + 1);
printf("make: %s\n", myCars[x].make);
printf("model: %s\n", myCars[x].model);
printf("year: %s\n", myCars[x].year);
printf("mile: %s\n", myCars[x].year):
}
