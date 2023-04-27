#include "lists.h"

/**
 * list_len - function to get the lengh of list elements
 * @h: a list passed to the function
 *
 * Return: number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t list_length = 0;

	while (h != NULL)
	{
		list_length++;
		h = h->next;
	}
	return (list_length);
}
