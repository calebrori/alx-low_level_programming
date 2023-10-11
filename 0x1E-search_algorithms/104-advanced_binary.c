#include "search_algos.h"

/**
 * rec_search - searches and return the index
 *              of the first value in the array
 *
 * @array: pointer
 * @size: size of array
 * @value: value to search for
 * Return: -1 if the value is not present
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t p;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (p = 0; p < size; p++)
		printf("%s %d", (p == 0) ? ":" : ",", array[p]);

	printf("\n");

	if (even && size % 2 == 0)
		even--;

	if (value == array[even])
	{
		if (even > 0)
			return (rec_search(array, even + 1, value));
		return ((int)even);
	}

	if (value < array[even])
		return (rec_search(array, even + 1, value));

	even++;
	return (rec_search(array + even, size - even, value) + even);
}

/**
 * advanced_binary - calls to rec_search
 * @array: pointer
 * @size: size of array
 * @value: value to search for
 * Return: -1 if the value is not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	int token;

	token = rec_search(array, size, value);

	if (token >= 0 && array[token] != value)
		return (-1);

	return (token);
}
