/*
Author: Mark Dencler
Description: This program demonstrates the use of scanf()
			 to get basic numeric keyboard input from a user
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int exInt;
	float exFlt;
	double exDbl;
	char exStr[30];

	// the variables contains garbage if they are not initialized
	printf("exInt contains: %d\n", exInt);
	printf("exFlt contains: %f\n", exFlt);
	printf("exDbl contains: %f\n", exDbl);
	printf("exStr contains: %s\n", exStr);

	// prompt the user for inputs and get them (remeber about %lf)
	printf("Please enter an integer: ");
	scanf("%d", &exInt);
	printf("Please enter a float: ");
	scanf("%f", &exFlt);
	printf("Please enter a double: ");
	scanf("%lf", &exDbl);
	printf("Please enter a string: ");
	scanf("%s", exStr);

	// display the values in the variables again
	printf("exInt contains: %d\n", exInt);
	printf("exFlt contains: %f\n", exFlt);
	printf("exDbl contains: %f\n", exDbl);
	printf("exStr contains: %s\n", exStr);

	return 0;
}
