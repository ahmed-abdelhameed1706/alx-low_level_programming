#ifndef DOG_H
#define DOG_H

/**
 * struct dog - make a new type of object dog
 * @name: variable
 * @age: variable
 * @owner: variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */
