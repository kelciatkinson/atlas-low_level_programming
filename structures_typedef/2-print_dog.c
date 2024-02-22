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
	if (d->name == NULL)
		printf("Name: (nil) ");
	else
		printf("%s", d->name);
	if (d->age == NULL)
		printf("(nil) ");
	else
		printf("%f", d->age);
	if (d->owner == NULL)
		printf("(nil) ");
	else
		printf("%s", d->owner);

}
