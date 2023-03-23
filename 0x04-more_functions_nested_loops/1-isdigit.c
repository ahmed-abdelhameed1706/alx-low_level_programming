#include "main.h"

/**
 * _isdigit - checks if char is upper
 * @c: parameter to be used
 * Return: returns 1 if true 0 if false
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
