#include "lists.h"

/**
 * *add_nodeint - adds a node at the beggining
 * @head: the pointer to the beggining
 * @n: the n of the list
 *
 * Return: returns a pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
