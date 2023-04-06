/**
 * is_palindrome - function that reads the same backwards as forwards
 * @s: captured string
 *
 * Return: sequence that reads the same backwards as forwards
 *
 * _strlen_recursion - function that  returns the length of a string
 * @s: captured string
 *
 * Return: string length
 *
 * check_pal - palindrome checker
 * @s: captured string
 * @i: performs same action on every item
 * @len: captured length string
 *
 * Return: sequence that reads the same backwards as forwards
 */
#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

