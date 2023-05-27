#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct car
{
	char make[20];
	char model[20];
	int year;
	int miles;
} cars;

int main()
{
//Create an instance of the car structure
cars myCar;

strcpy(myCar.make, "Toyota");
strcpy(myCar.model, "Camry");
myCar.year = 2002;
myCar.miles = 120km/hr;

printf("Car make: %s\n", myCar.make);
printf("\nCar model: %s\n", myCar.model);
printf("\nCar Year: %s\n", myCar.year);
printf("\nCar miles: %s\n", myCar.miles);
}
