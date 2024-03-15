#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores variables of type float and char
 * @name: pointer to character
 * @age: float variable
 * @owner: pointer to character
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

