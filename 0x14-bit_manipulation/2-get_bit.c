#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of bit to get
 *
 * Return: value of bit at index or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

