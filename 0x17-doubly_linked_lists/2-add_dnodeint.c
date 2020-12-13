#include "lists.h"
/**
 *add_dnodeint - add a node at the beginning of the list
 *@head : pointer to the list
 *@n : a number to add
 *Return: a pointer to a list
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (0);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
