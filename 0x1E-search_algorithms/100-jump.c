#include "search_algos.h"
/**
  * jump_search - function that searches for a value
  *				in a sorted array of integers 
  * @array: pointer 
  * @size: number of elements
  * @value: value to search for
  *
  * Return: -1 if the value is not present or the array is NULL
  */

int jump_search(int *array, size_t size, int value)
{
	size_t c, jump, step;

	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the jump step size */
	step = sqrt(size);

	/* Perform the jump search */
	for (c = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Store the previous jump position */
		c = jump;

		/* Update the jump position */
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", c, jump);

	/* Adjust the jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform a linear search within the identified range */
	for (; c < jump && array[c] < value; c++)
		printf("Value checked array[%ld] = [%d]\n", c, array[c]);

	printf("Value checked array[%ld] = [%d]\n", c, array[c]);

	/* Check if the value is found and return the corresponding index */
	return (array[c] == value ? (int)c : -1);
}
