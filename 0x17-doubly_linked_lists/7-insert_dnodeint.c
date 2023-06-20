#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: Pointer to the head of the list.
 * @idx: Index of the new node.
 * @n: Value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode = NULL;
dlistint_t *head;
unsigned int i;

/* Check if index is 0 */
if (idx == 0)
newNode = add_dnodeint(h, n);
else
{
head = *h;
i = 1;

/* Move to the beginning of the list if necessary */
if (head != NULL)
while (head->prev != NULL)
head = head->prev;

/* Traverse the list to find the insertion position */
while (head != NULL)
{
if (i == idx)
{
/* Check if the new node should be inserted at the end */
if (head->next == NULL)
newNode = add_dnodeint_end(h, n);
else
{
newNode = malloc(sizeof(dlistint_t));
if (newNode != NULL)
{
newNode->n = n;
newNode->next = head->next;
newNode->prev = head;
head->next->prev = newNode;
head->next = newNode;
}
}
break;
}

head = head->next;
i++;
}
}

return (newNode);
}
