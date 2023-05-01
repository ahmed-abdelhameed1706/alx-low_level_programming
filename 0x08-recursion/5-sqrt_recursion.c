#include "main.h"

/**
 * _sqrt - finds the square root
 * @n: the number to find the square root of
 * @min: the minimum value to search
 * @max: the maximum value to search
 *
 * Return: the square root of n or -1
 */

int _sqrt(int n, int min, int max)
{
	int mid;

	if (n == 0 || n == 1)
		return n;
	if (min > max)
		return -1;
	
	mid = min + (max - min) / 2;
	
	if (mid * mid == n)
		return mid;
	
	if (mid * mid < n)
		return _sqrt(n, mid + 1, max);
	
	else
		return _sqrt(n, min, mid - 1);
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n or -1
 */

int _sqrt_recursion(int n)
{
	return _sqrt(n, 0, n);
}
