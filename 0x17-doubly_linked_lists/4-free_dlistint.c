#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a list
 *@head: list
 *
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *node, *new;
new = head;
while (new != NULL)
{
node = new->next;
free(new);
new = node;
}
}
