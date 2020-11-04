#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free a list of int
 * @head : data structure
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *new, *string;
if (head == '\0')
return;
string = *head;
while (string)
{
new = string;
string = string->next;
free(new);
}
*head = NULL;
}
