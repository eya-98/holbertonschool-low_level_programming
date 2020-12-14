#include "lists.h"
/**
 *
 *
 *
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
