#include "main.h"

/**
 * rev_string - main
 * @s : parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	char c = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
