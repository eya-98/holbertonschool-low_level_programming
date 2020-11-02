#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - add a new node at the end of a list function
 *@head: pointer to the head of the list
 *@str: string to add
 *Return: adress of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *string;
unsigned int len = 0;
if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
while (str[len])
len++;
new->len = len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
string = *head;
while (string->next != NULL)
string = string->next;
string->next = new;
return (new);
}
