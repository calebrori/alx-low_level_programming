#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in a sorted list
*              of integers using the Jump search algorithm
 *
 * @list: input
 * @size: array size
 * @value: search value
 * Return: If the value is not present or the head of the list is NULL, NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t post, post_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	post = 0;
	post_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (post += post_size; jump->index < post; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
