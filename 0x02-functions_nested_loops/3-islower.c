#include "main.h"

/**
 * _islower - checks if char is lowercase
 *
 * @c: is parameter to be printed
 *
 * Return: 1 if succes 0 if failed
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c + '0' == i)
		{
			return (1);
		}
	}
	return (0);
}
