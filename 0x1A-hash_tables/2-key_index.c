#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 * @key: The key
 * @size: array size
 *
 * Return: The index
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
