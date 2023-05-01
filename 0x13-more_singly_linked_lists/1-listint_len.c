#include "lists.h"

/**
 * listint_len - prints the lenght of linked list
 * @h: linked list to get the lenght of
 *
 * Return: length of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
