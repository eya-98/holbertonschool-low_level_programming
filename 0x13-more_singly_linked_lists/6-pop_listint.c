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
int n;
listint_t *new;
if (*head == NULL)
return (0);
new = (*head)->next;
free(*head);
*head = new;
n = (*head)->n;
return (n);
}
