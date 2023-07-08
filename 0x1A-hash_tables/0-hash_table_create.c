#include "main.h"

/**
 * hash_table_create - Creates hash table
 * @size: array size
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pop;
	unsigned long int i;

	pop = malloc(sizeof(hash_table_t));
	if (pop == NULL)
		return (NULL);

	pop->size = size;
	pop->array = malloc(sizeof(hash_node_t *) * size);
	if (pop->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pop->array[i] = NULL;

	return (pop);
}
