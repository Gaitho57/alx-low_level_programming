#include "lists.h"

/**
 * dlistint_len - Returns elements of numbers in a double linked list.
 *
 * @h: Head of the list.
 *
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

/* Check if the list is empty */
if (h == NULL)
return (count);

/* Traverse the list from the head to the first node */
while (h->prev != NULL)
h = h->prev;

/* Count the nodes in the list */
while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

