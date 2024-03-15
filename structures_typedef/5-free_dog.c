#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory of struct
 * @d: pointer to dog_struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

