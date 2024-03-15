#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores variables of type float and character
 * @name: pointer to character
 * @age: float variable
 * @owner: pointer to character
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

void _strcopy(char *dst, char *src);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */

