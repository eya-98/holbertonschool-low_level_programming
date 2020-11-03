#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a list
 * @head : data structure
 * @n : const int
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *string;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = '\0';
if (*head == NULL)
{
*head = new;
return (new);
}
string = *head;
while (string->next != '\0')
{
string = string->next;
}
string->next = new;
return (new);
}
