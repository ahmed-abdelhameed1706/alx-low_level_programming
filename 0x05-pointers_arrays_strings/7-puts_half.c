#include "main.h"

/**
 * puts_half - main
 * @str: parameter
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int j;
	int k;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		j = (i + 1) / 2;
	}
	else
	{
		j = i / 2;
	}

	for (k = j; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
