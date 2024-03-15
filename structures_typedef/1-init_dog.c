#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to character
 * @age: variable for parameter
 * @owner: pointer to character
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	for (i = 0; name[i]; i++)
		d->name = name[i];
	d->age = age;
	for (i = 0; owner[i]; i++)
		d->owner = owner[i];
	return;
}

