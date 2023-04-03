#include "main.h"

/**
 * *_strchr - function to return value
 * @s: parameter
 * @c: parameter
 * Return: returns pointer to character
 */
char *_strchr(char *s, char c)
{
	int i;
	int j = 0;
	int len = 0;

	while (s[j] != '\0')
	{
		len++;
		j++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
