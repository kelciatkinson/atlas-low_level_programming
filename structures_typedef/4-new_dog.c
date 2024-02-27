#include "dog.h"
#include <stdlib.h>

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
	Doggy->name = malloc(strlen(name) +1)
	if (Doggy->name == NULL)
		return (NULL);
	strcpy(Doggy->name, name);
}
