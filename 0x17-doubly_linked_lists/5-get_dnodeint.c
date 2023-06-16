#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @index: index of node
 * @head: pointer to head
 *
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = head;

	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--
	}

	if (index == 0)
		return (temp);
	else
		return (NULL);
}
