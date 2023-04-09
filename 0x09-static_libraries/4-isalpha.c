#include "main.h"

/**
 * _isalpha - checks if char is lowercase
 *
 * @c: is parameter to be printed
 *
 * Return: 1 if succes 0 if failed
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
