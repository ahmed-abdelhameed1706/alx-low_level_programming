#include "main.h"

/**
 * *_strchr - function to return value
 * @s: parameter
 * @c: parameter
 * Return: returns pointer to character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
