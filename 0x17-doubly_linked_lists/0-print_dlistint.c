#include "lists.h"

/**
 * print_dlistint - prints the entire list
 * @dlistint_t: parameter
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	temp = h;
	size_t count;

	while(temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
