#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *                  Returns the number of nodes.
 *
 * @h: Head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

/* Check if the list is empty */
if (h == NULL)
return (count);

/* Traverse the list from the head to the first node */
while (h->prev != NULL)
h = h->prev;

/* Print each node and update the count */
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}

return (count);
}
