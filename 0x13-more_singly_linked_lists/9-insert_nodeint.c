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
for (i = 0; string != '\0'; i++)
{
string = string->next;
}
if (i < idx)
return (0);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (0);
if (idx == 0)
{
new->n = n;
new->next = *head;
}
else
{
new = *head; 
for (i = 0; i < idx - 1; i++)
{
new = new->next;
}
new->n = n;
}
return (new);
}
