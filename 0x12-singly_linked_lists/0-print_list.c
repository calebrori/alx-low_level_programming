#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t
* @h: name of the list
*
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	int q = 0;


	while (h)
	{
		if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		q++;
		h = h->next;
	}
	return (count);
}
