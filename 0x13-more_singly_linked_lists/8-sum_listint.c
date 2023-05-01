#include "lists.h"

/**
 * sum_listint - adds all the data together
 * @head: pointer to the first node
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int n;
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		n = temp->n;
		sum += n;
		temp = temp->next;
	}

	return (sum);
}
