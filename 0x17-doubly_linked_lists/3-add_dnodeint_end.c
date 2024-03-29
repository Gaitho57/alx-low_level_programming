#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: Pointer to the head of the list.
 * @n: Value of the element to be added.
 *
 * Return: Address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *current = *head;
dlistint_t *new_node;

/* Create a new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;

if (current != NULL)
{
/* Traverse to the end of the list */
while (current->next != NULL)
current = current->next;

current->next = new_node;
}
else
{
*head = new_node;
}

new_node->prev = current;

return (new_node);
}

