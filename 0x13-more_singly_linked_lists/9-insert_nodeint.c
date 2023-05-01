#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts node at position
 * @head: pointer to the first node
 * @n: data to be stored in the node
 * @idx: index of the requested node
 *
 * Return: pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	
	if (*head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
