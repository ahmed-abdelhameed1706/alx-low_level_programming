#include "main.h"

/**
 * _isupper - checks if char is upper
 * @c: parameter to be used
 * Return: returns 1 if true 0 if false
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
