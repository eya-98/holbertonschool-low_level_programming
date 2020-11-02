#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node - a function that adds a new node
 * @head : data structure
 * @str : const char
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new, *string;
int len = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (str == NULL)
return (NULL);
while (str[len] != '\0')
{
len++;
}
new->str = strdup(str);
new->len = len;
new->next = NULL;
if (head == NULL)
{
*head = new;
return (new);
}
string = *head;
while (string->next != NULL)
{
string = string->next;
}
string->next = new;
return (new);
}
