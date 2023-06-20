#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a doubly linked list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of the data.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

/* Check if the list is not empty */
if (head != NULL)
{
/* Move to the beginning of the list if necessary */
while (head->prev != NULL)
head = head->prev;

/* Traverse the list and calculate the sum */
while (head != NULL)
{
sum += head->n;
head = head->next;
}
}

return (sum);
}
