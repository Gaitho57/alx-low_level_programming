#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a
 * dlistint_t linked list.
 *
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *currentNode, *previousNode;
unsigned int i;

if (*head == NULL)
return (-1);

currentNode = *head;

while (currentNode->prev != NULL)
currentNode = currentNode->prev;

i = 0;

while (currentNode != NULL)
{
if (i == index)
{
if (i == 0)
{
*head = currentNode->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
previousNode->next = currentNode->next;
if (currentNode->next != NULL)
currentNode->next->prev = previousNode;
}

free(currentNode);
return (1);
}

previousNode = currentNode;
currentNode = currentNode->next;
i++;
}

return (-1);
}
