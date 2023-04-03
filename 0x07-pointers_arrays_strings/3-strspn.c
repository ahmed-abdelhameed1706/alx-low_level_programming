#include "main.h"

/**
 * _strspn - function returns bytes
 * @s: parameter
 * @accept: parameter
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int value = 0;
	int s_len = 0;
	int accept_len = 0;

	while (s[s_len] != '\0')
	{
		s_len++;
	}

	while (accept[accept_len] != '\0')
	{
		accept_len++;
	}

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (accept[j] == s[i])
			{
				value++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (value);
			}
		}
	}
	return (value);
}
