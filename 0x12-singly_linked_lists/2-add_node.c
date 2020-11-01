#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node - a function that adds a new node
 * @h : data structure
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int len = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
while (str[len] != '\0')
{
len++;
}
new->str = strdup(str);
new->len = len;
new->next = *head;
*head = new;
return (*head);
}
