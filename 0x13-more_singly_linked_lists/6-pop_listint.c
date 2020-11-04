#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head : data structure
 * Return: An int.
 */
int pop_listint(listint_t **head)
{
listint_t *new;
if (*head == NULL)
return (0);
new = (*head)->next;
if (new == NULL)
return (0);
free(*head);
*head = new;
 return ((*head)->n);
}
