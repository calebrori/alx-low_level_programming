#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to return, starting from 0.
 *
 * Return: A pointer to the nth node of the list, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
	if (count == index)
	{
		return (current);
	}

	count++;
	current = current->next;
	}

	return (NULL);
}
