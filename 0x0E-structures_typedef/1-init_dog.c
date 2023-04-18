#include "dog.h"
#include <stddef.h>
/**
 * init_dog - main function
 * @d: parameter
 * @name: name
 * @age: parameter
 * @owner: parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
