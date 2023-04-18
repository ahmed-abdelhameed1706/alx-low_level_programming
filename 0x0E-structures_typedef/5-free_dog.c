#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - function
 * @d: parameter
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
