#include "search_algos.h"
#include <math.h>

/**
  * jump_search - function that searches for a value
  *		in a sorted array of integers
  * @array: pointer
  * @size: number of elements
  * @value: value to search for
  *
  * Return: -1 if the value is not present or the array is NULL
  */

int jump_search(int *array, size_t size, int value)
{
	int index, c, d, initial;

	if (array == NULL || size == 0)
		return (-1);

	c = (int)sqrt((double)size);
	d = 0;
	initial = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		d++;
		initial = index;
		index = d * c;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", initial, index);

	for (; initial <= index && initial < (int)size; initial++)
	{
		printf("Value checked array[%d] = [%d]\n", initial, array[initial]);
		if (array[initial] == value)
			return (initial);
	}

	return (-1);
}
