#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - Write a function that frees.
 * @head : data structure
 * Return: void
 */
void free_list(list_t *head)
{
list_t *new;
while (head != NULL)
{
new = head;
free(new->str);
head = head->next;
}
free(new);
}
