#include "main.h"
#include "stdlib.h"

/**
 * *create_array - creates an array
 * @size: parameter
 * @c: parameter
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	result = malloc(sizeof(char) * size);

	if (result == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		result[i] = c;
	}

	return (result);
}
