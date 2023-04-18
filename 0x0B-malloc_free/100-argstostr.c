#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function
 * @ac: parameter
 * @av: parameter
 * Return: Char
 */
char *argstostr(int ac, char **av)
{
	int len = 0, k = 0;
	int i, j;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}
	len++;

	result = malloc(len);

	if (result == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[k] = av[i][j];
			j++;
			k++;
		}
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';

	return (result);
}
