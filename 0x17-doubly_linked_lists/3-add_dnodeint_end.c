#include "lists.h"
/**
 *add_dnodeint_end - add a node at the end of the list
 *@head : pointer to a list
 *@n : the node content to add
 *Return: a pointer to list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *node;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (0);
new = *head;
if (*head == NULL)
{
node->next = NULL;
node->n = n;
*head = node;
node->prev = NULL;
return (node);
}
while (new->next)
{
new = new->next;
}
node->n = n;
new->next = node;
node->prev = new;
node->next = NULL;
return (node);
}
