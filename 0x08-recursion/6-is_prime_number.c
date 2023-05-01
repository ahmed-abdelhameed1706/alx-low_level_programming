/**
 * is_prime - checks if n is a prime number
 * @n: the number to check
 * @i: the current factor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if n is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
