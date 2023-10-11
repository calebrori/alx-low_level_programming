#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: A pointer
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: -1 If the value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (array == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		printf("Value checked array[%ld] = [%d]\n", c, array[c]);

		if (array[c] == value)

			return (c);
	}

	return (-1);
}
