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
if (node != NULL)
return (0);
new = *head;
if (new == NULL)
{
new->next = NULL;
new->n = n;
new->prev = NULL;
*head = new;
return (new);
}
while (new != NULL)
{
new = new->next;
}
node->prev = new;
node->next = NULL;
node->n = n;
new->next = node;
return (node);
}
