#ifndef DOG_H
#define DOG_H

/**
 * struct dog - make a new type of object dog
 * @name: variable
 * @age: variable
 * @owner: variable
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
