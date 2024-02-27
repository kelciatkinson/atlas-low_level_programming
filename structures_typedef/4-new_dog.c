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
	dog_t *Doggy = malloc(sizeof(dog_t));
	if (Doggy == NULL)
		return (NULL);
	Doggy->name = malloc(sizeof(name) + 1);
	Doggy->owner = malloc(sizeof(owner) + 1);

	if (Doggy->name == NULL)
		return (NULL);
		free(Doggy);
	if (Doggy->age == 0)
		return (0);
	if (Doggy->owner == NULL)
		return (NULL);
		free(Doggy->name);
	Doggy->name = name;
	Doggy->age = age;
	Doggy->owner = owner;
	return (Doggy);
}
