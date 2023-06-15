#include "lists.h"

/**
 * add_dnodeint - adds a node at the biggening
 * @head: head of list
 * @n: data in node
 *
 * Return: pointer to the head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
