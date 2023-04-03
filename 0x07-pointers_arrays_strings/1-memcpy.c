#include "main.h"

/**
 * *_memcpy - main function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: char type
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
