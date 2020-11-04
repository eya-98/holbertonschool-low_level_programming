#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head : data structure
 * @idx : he index of the list where the new node should be added.
 * @n : integer
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *string, *new;
if (*head == NULL)
return (0);
string = *head;
new = *head;
for (i = 0; string != '\0'; i++)
{
string = string->next;
}
if (i < idx)
return (0);
for (i = 0; i < idx; i++)
{
if (new == NULL)
return (0);
new = new->next;
}
new->n = n;
for (i = idx + 1; new != '\0'; i++)
new = new->next;
return (new);
}
