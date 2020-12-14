#include "lists.h"
/**
 *get_dnodeint_at_index - get the nth node
 *@head: the list
 *@index: the index of the node to get
 *Return: the node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *new;
new = head;
for (i = 0; i < index; i++)
{
new = new->next;
if (new == NULL)
return (0);
}
return (new);
}
