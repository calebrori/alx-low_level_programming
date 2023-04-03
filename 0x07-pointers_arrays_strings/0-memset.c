#include "main.h"
/**
 * _memset - fills the memory with value
 * @s: starts with
 * @b: the constant
 * @n: bytes of the memory
 *
 *Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

