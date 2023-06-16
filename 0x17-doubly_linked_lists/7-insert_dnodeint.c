#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: A pointer to a pointer to the head of the dlistint_t list.
 * @idx: The index of the list where the new node should be added, starting from 0.
 * @n: The value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
	new_node->prev = NULL;
	new_node->next = *h;

	if (*h != NULL)
	{
		(*h)->prev = new_node;
	}

	*h = new_node;

	return (new_node);
	}

	while (current != NULL && count < idx)
	{
	current = current->next;
	count++;
	}

	if (count < idx)
	{
	free(new_node);
	return (NULL);
	}

	new_node->prev = current->prev;
	new_node->next = current;

	if (current->prev != NULL)
	{
	current->prev->next = new_node;
	}

	current->prev = new_node;

	return (new_node);
}
