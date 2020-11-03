#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free a list of int
 * @head : data structure
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *new;
while (head)
{
new = head;
free(new);
head = head->next;
}
}
