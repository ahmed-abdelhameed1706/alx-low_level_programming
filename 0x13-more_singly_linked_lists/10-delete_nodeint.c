#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index;
 * @head: pointer to the first node
 * @index: index of the node to be deleted
 *
 * Return: 1 on succes -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *to_be_deleted;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		to_be_deleted = *head;
		*head = (*head)->next;
		free(to_be_deleted);
		return (1);
	}

	temp = *head;

	for (i = 0; i < index - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	to_be_deleted = temp->next;
	temp->next = to_be_deleted->next;
	free(to_be_deleted);

	return (1);
}
