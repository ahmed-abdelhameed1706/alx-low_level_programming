#include "main.h"

/**
 * _strlen - main
 * @s: parameter
 * Return: number
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
