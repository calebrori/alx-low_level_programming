#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * @array: array
 * @size: size of array
 * @cmp: pointer to function used for comparison
 *
 * Return: If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
