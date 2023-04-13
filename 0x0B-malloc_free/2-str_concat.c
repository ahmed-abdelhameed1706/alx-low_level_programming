#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - main function
 * @s1: parameter
 * @s2: parameter
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size = 0, s2_size = 0, i, j;
	char *result;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	while (s1[s1_size] != '\0')
	{
		s1_size++;
	}
	while (s2[s2_size] != '\0')
	{
		s2_size++;
	}
	result = (char *)malloc((s1_size + s2_size + 1) * sizeof(char));

	if (result == NULL)
	{
		return (0);
	}
	for (i = 0; i < s1_size; i++)
	{
		result[i] = s1[i];
	}
	for (j = i; j < s2_size + s1_size; j++)
	{
		result[j] = s2[j - i];
	}
	result[j] = '\0';
	return (result);
}
