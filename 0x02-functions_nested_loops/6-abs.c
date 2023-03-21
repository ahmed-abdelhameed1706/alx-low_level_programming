#include "main.h"

/**
 * _abs - calculates the absolute value
 *
 * @i: parameter to be used
 *
 * Return: returns intiger
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -(i);
	}
	else
	{
		i = i;
	}
	return (i);
}
