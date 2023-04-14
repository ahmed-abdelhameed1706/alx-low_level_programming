#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - main funciton
 * @nmemb: parameter
 * @size: parameter
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	result = malloc(nmemb * size);

	if (result == NULL)
		return (0);

	for (i = 0; i < nmemb * size; i++)
	{
		result[i] = 0;
	}
	return (result);
}
