#include "main.h"
/**
 * _strpbrk -  locates the first occurrence in the string
 * @s: input
 * @accept: input
 *
 * Return: pointer that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

