#include "search_algos.h"

/**
 * binary_search - function that searches for a values
 *                  in a sorted array of integer
 * @array: pointer
 * @size: number of elements in array.
 * @value: value to search for
 *
 * Return: -1 if the value is not present or the array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t c, left, right;
	
	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (c = left; c < right; c++)
			printf("%d, ", array[c]);
		printf("%d\n", array[c]);
		
		c = left + (right - left) / 2;
		
		if (array[c] == value)
			return (c);
		
		if (array[c] > value)
			right = c - 1;
		else
			left = c + 1;
	}
	return (-1);
}
