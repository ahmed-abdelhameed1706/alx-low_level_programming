#include "lists.h"

/**
 * *reverse_listint - revering a list
 * @head: pointer to the first node
 *
 * Return: pointer to the ifrst node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t previous = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
