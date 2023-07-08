#include "hash_tables.h"

/**
 * hash_table_get - gets value based on key
 * @ht: hashtable to look into
 * @key: key to find value for
 *
 * Return: value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index(key);

	hash_node_t item = ht->array[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);

}
