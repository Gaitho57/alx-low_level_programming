#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: Pointer to the head of the list.
 * @index: Index of the node to search for, starting from 0.
 *
 * Return: The nth node or NULL if not found.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int size = 0;
dlistint_t *current = head;

/* Check if the list is empty */
if (head == NULL)
return (NULL);

/* Traverse the list until the desired index is reached */
while (current != NULL)
{
if (index == size)
return (current);

size++;
current = current->next;
}

/* Node not found at the specified index */
return (NULL);
}
