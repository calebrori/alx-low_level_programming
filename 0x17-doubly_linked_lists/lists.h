#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_s - singly linked list
 * @h: integer
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 * Caleb Chacha
 */
typedef struct dlistint_s
{
	int h;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
