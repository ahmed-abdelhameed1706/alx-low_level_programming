#include "lists.h"

/**
 * *get_nodeint_at_index - gets the nth node
 * @head: pointer to the begging of the list
 * @index: the index number of node
 *
 * Return: the node at the number
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);

	return (temp);
}
