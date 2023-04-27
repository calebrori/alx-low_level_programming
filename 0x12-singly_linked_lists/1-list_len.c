#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* list_len - returns elements in a linked list
* @h: pointer to list
*
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	int count = 0;


	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

