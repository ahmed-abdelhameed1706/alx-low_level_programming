#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - main function
 * @b: parameter
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);

	if (result == NULL)
	{
		exit(98);
	}

	return (result);
}
