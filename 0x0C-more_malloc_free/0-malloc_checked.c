#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - main function
 * @b: parameter
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *result;

	result = malloc(b);

	if (result == NULL)
	{
		exit(98);
	}

	return (result);
}
