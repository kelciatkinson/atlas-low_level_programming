#include "dog.h"
#include <stdlib.h>

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
		printf("");
	else
		printf("%s", d);
	if (name == NULL)
		printf("Name: (nil) ");
	else
		printf("%s", d->name);
	if (age == NULL)
		printf("(nil) ");
	else
		printf("%f", d->age);
	if (owner == NULL)
		printf("(nil) ");
	else
		printf("%s", d->owner);

}
