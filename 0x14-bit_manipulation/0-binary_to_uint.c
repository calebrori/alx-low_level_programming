#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;

	if (b == NULL)
	return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result <<= 1;

		if (b[index] == '1')
		result += 1;

		index++;
	}

	return (result);
}
