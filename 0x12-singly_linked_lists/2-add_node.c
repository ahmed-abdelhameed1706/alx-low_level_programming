#include "lists.h"
#include <string.h>

/**
 * *add_node - a function to add a node to the list
 * @head: the first element of the list
 * @str: the value of the element of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
