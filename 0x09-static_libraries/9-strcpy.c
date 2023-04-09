#include "main.h"

/**
 * *_strcpy - main
 * @dest: param
 * @src: param
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int srcLen = 0;
	int k;

	for (i = 0; src[i] != '\0'; i++)
	{
		srcLen++;
	}

	for (k = 0; k < srcLen; k++)
	{
		dest[k] = src[k];
	}
	dest[srcLen] = '\0';
	return (dest);
}
