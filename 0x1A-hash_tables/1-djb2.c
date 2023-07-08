#include "hash_tables.h"

/**
 * hash_djb2 - Hash function i
 * @str: The string
 *
 * Return: calculated hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int q;

	hash = 5381;
	while ((q = *str++))
		hash = ((hash << 5) + hash) + q;

	return (hash);
}
