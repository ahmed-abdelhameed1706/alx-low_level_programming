#include <stdio.h>

/**
 * custom_atoi - my atoi function
 * @str: The string to convert to an integer
 *
 * Return: int
 */
int custom_atoi(const char *str)
{
	int num = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (-1); /* Not a valid number */
		}

		num = num * 10 + (str[i] - '0');
		i++;
	}

	return (num);
}

/**
 * main - main function
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, num;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = custom_atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

