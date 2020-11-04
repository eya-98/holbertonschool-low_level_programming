#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - a function that returns the nth node of a list
 * @head : data structure
 * @index : is the index of the node
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
 listint_t *string, *new;
if (head == '\0')
return (NULL);
string = head;
for (i = 0; string != NULL; i++)
{
string = string->next;
}
if (i < index)
return (NULL);
new = head;
for (i = 0; i < index; i++)
{
if (new == NULL)
return (NULL);
new = new->next;
} 
return (new);
}
