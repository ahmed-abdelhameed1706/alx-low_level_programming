#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - makes a copy of str
 * @str: parameter
 * Return: char
 */

char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *result;

	if (str == NULL)
	{
		return (0);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	result = malloc(len + 1);

	if (result == NULL)
	{
		return (0);
	}

	for (i = 0; i < len; i++)
	{
		result[i] = str[i];

	}
	result[len] = '\0';

	return (result);
}
