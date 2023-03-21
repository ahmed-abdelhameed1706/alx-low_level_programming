#include "main.h"

/**
 * print_alphabet_x10 - prints the alphapet x10
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		x++;
	}
}
