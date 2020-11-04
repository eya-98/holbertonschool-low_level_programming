#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position.
 * @head : data structure
 * @index : the index of the list where the new node should be added.
 * Return: a list.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *str, *string, *new;
if (head == NULL)
return (-1);
string = *head;
for (i = 0; string != '\0'; i++)
{
if (string == NULL)
return (-1);
string = string->next;
}
if (i < index)
return (-1);
str = *head;
if (index == 0)
{
new = (*head)->next;
if (new == NULL)
return (-1);
free(*head);
*head = new;
}
else
{
for (i = 0; i < index - 1; i++)
{
if (str == NULL)
return (-1);
str = str->next;
}
new = str->next;
str->next = new->next;
free(new);
}
return (1);
}
