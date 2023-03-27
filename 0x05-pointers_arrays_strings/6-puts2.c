#include "main.h"

/**
 * puts2 - main
 * @str: parameter
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0 || i == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
