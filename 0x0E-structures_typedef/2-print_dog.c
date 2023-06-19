#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struch dog
 * @d: pointer to the struch dog instance
 */

void print_dog(struct dog *d)
{
	int age_conv;

	age_conv = (int)d->age;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (age_conv != 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
