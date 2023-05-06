#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	mask <<= (sizeof(unsigned long int) * 8) - 1;

	while (mask > 0)
	{
		if (n & mask) /* If the current bit is 1 */
			putchar('1');
		else /* If the current bit is 0 */
			putchar('0');

		mask >>= 1; /* Shift mask to the right */
	}
}

