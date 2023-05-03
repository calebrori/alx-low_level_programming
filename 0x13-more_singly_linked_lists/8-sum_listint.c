#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in list
 * @head: first node in list
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
 int sum = 0;
 listint_t *temp = head;

 while (temp)
 {
 sum += temp->n;
 temp = temp->next;
 }

 return (sum);
}

