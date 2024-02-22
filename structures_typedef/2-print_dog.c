#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog- here is a description
 *
 * @d: d
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: %f\n", 0.000000);
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
