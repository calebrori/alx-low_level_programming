#include "search_algos.h"

/**
  * interpolation_search - function that searches for
  *                        a value in a sorted array of integers
  * @array: pointer
  * @size: number of elements
  * @value: value to search for
  *
  * Return: -1, if the value is not present or the array is NULL
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t c, d, e;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (d = 0, e = size - 1; e >= d;)
	{
		c = d + (((double)(e - d) / (array[e] - array[d])) * (value - array[d]));
		if (c < size)
			printf("Value checked array[%ld] = [%d]\n", c, array[c]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", c);
			break;
		}

		if (array[c] == value)
			return (c);
		if (array[c] > value)
			e = c - 1;
		else
			l = c + 1;
	}

	return (-1);
}
