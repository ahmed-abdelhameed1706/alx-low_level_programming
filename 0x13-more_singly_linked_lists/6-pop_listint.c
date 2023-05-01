#include "lists.h"

/**
 * pop_listint - removes a head
 * @head: pointer to the start of the list
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return(0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
