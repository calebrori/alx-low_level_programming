#include "main.h"

/**
 * factorial - a factorial is printed
 * @n: digit that gets producted to make factorial
 *
 * Return: product of all positive integers less than/equal to positive integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

