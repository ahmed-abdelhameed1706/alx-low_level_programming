#include "lists.h"

/**
 * *add_nodeint_end - adds a node to the end of the list
 * @head: pointer to the beggining of the list
 * @n: n of the list
 *
 * Return: a pointer to the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else 
	{
		temp = *head;
		while (temp != NULL)
		{
			temp = temp->next;
		}
		temp = new_node;
	}

	return (new_node);
}
