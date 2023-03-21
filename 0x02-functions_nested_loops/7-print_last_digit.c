#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @i: parameter to be used
 *
 * Return: returns last digit
 */
int print_last_digit(int i)
{
	int last;
	
	last = (i % 10);
	if (last < 0)
	{
		last = -last;
	}

	return (last);
}
