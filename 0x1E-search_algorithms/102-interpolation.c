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
	size_t pos, low, high;
	double c;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		c = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + c);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
