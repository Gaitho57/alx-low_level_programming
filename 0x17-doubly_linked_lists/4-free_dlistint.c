#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: Nothing.
 **/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *temp;

/* Check if the list is empty */
if (head == NULL)
return;

/* Traverse the list and free each node */
while (current->next)
{
temp = current->next;
free(current);
current = temp;
}

/* Free the last node */
free(current);
}
