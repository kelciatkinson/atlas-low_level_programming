#ifndef DOG_H
#define DOG_H

/**
 * struct dog- here is a desription
 *
 * @name: here is a parameter
 * @age: here is another parameter
 * @owner: here is another parameter
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
