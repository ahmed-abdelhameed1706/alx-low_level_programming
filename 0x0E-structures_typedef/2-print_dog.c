#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: paramter
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != null)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %i\n", d->age ? d->age : "(nil)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
