#include "hash_tables.h"

/**
 * hash_table_create - function to create hash_table
 * @size: size of the hashtable
 *
 * Return: a hash table struct
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * (table->size));

	if (table->array == NULL)
	{
		free(table)
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
