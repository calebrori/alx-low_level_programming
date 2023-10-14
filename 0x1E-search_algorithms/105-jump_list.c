#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in a sorted list
*              of integers using the Jump search algorithm
 *
 * @list: input
 * @size: array size
 * @value: search value
 * Return: -1 If the value is not present
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t prime, c, d;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	d = (size_t)sqrt((double)size);
	prime = 0;
	c = 0;

	do {
		prev = list;
		c++;
		prime = c * d;

		while (list->next && list->prime < prime)
			list = list->next;

		if (list->next == NULL && prime != list->prime)
			prime = list->prime;

		printf("Value checked at prime [%d] = [%d]\n", (int)prime, list->n);

	} while (prime < size && list->next && list->n < value);

	printf("Value found between primees ");
	printf("[%d] and [%d]\n", (int)prev->prime, (int)list->prime);

	for (; prev && prev->prime <= list->prime; prev = prev->next)
	{
		printf("Value checked at prime [%d] = [%d]\n", (int)prev->prime, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
