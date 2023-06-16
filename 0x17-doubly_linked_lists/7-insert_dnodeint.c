#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a given position in a dlistint_t list.
 * @h: A pointer to a pointer to the head of the dlistint_t list.
 * @idx: The index of the list where the new node
 * should be added, starting from 0.
 * @n: The value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;

	for (; current && idx; idx--, current = current->next)
		;
	if (!current && idx)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->prev = current ? current->prev : NULL;
	new_node->next = current;

	if (current)
	current->prev = new_node;

	if (new_node->prev)
	new_node->prev->next = new_node;
	else
	*h = new_node;

	return (new_node);
}
