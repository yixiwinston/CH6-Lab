#include<stdio.h>
#include<stdlib.h>
#include "Information.h"


int main() {

	Person P;

	printf("Pleas enter your name: ");
	scanf_s("%s", &P.name, 8);
	printf("Pleas enter your gender(0 for female,1 for male): ");
	scanf_s("%d", &P.gender);
	printf("Pleas enter your age: ");
	scanf_s("%d", &P.age);

	printf("\nHi! %s.", P.name);
	if (P.gender == 0)
		printf("you're a %d-year-old woman.\n", P.age);
	else
		printf("you're a %d-year-old man.\n", P.age);
	system("pause");
	return 0;
}

