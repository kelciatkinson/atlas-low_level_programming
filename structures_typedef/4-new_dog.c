#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog- here is a description
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int lenName;
	int lenOwner;

	dog_t *Doggy = malloc(sizeof(dog_t));
	if (Doggy == NULL)
		return (NULL);
	lenName= (sizeof(char) * name) + 1;
	Doggy->name = malloc(lenName);

	if (Doggy->name == NULL)
	{
		return (NULL);
		free(Doggy);
	}

	for (i = 0; i < lenName; i++)
	{
		Doggy->name[i] = name[i];
	}
	lenOwner = (sizeof(char) * owner) + 1;
	Doggy->owner = malloc(lenOwner);

	if (Doggy->owner == NULL)
	{
		return (NULL);
		free(Doggy->name);
	}

	for (i = 0; i < lenOwner; i++)
	{
		Doggy->owner[i] = owner[i];
	}
	Doggy->age = age;

	return (Doggy);
}
