#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: str key to find index of
 * @size: size of the hashtable
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
