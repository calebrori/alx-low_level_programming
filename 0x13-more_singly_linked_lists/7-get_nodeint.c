#include "lists.h"

/**
 * get_nodeint_at_index - returns a specific node of a list
 * @head: first node in list
 * @index: index of node
 *
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
 unsigned int i = 0;
 listint_t *temp = head;

 while (temp && i < index)
 {
 temp = temp->next;
 i++;
 }

 return (temp ? temp : NULL);
}

