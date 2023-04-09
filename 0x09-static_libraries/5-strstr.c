#include "main.h"

/**
 * *_strstr - function returns bytes
 * @haystack: parameter
 * @needle: parameter
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int haystack_len = 0;
	int needle_len = 0;

	while (haystack[haystack_len] != '\0')
	{
		haystack_len++;
	}

	while (needle[needle_len] != '\0')
	{
		needle_len++;
	}

	for (i = 0; i <= haystack_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (haystack + i);
		}
	}
	return (0);
}
