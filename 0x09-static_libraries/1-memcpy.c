#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: destination of memory
 *@src: source of memory
 *@n: number of bytes
 *
 *Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

