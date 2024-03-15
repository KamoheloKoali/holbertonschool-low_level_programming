#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new pointer for struct dog
 * @name: pointer to character
 * @age: vraiable for parameter
 * @owner: pointer to character
 */

dog_t *new_dog(char *name, float age, char *owner) {
	dog_t *new_dog_ptr;
	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	strncpy(new_dog_ptr->name, name, sizeof(new_dog_ptr->name) - 1);
	new_dog_ptr->name[sizeof(new_dog_ptr->name) - 1] = '\0';
	strncpy(new_dog_ptr->owner, owner, sizeof(new_dog_ptr->owner) - 1);
	new_dog_ptr->owner[sizeof(new_dog_ptr->owner) - 1] = '\0';
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}

