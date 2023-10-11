#include "search_algos.h"
/**
  * _binary_search - function that searches for a value
  *                  in a sorted array of integers
  * @array: pointer
  * @left: starting index of the [sub]array to search
  * @right: ending index of the [sub]array to search.
  * @value: value to search for
  *
  * Return: -1, if the value is not present or the array is NULL
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t c;

	if (array == NULL)
		return (-1);

	while (right >= left)
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

/**
  * exponential_search - searches for a value in a sorted array
  * @array: pointer to the first element
  * @size: number of elements
  * @value: value to search for
  *
  * Return: -1, if the value is not present or the array is NULL
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t c = 0, right;

	if (array == NULL)
		return (-1);
		if (array[0] != value)
	{
		for (c = 1; c < size && array[c] <= value; c = c * 2)
			printf("Value checked array[%ld] = [%d]\n", c, array[c]);
	}
	right = c < size ? c : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", c / 2, right);
	return (_binary_search(array, c / 2, right, value));
}
