#include "hash_tables.h"
/**
 *hash_table_create - create an empty hash table
 *@size : size of the table
 *Return: a pointer to the the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hush;
hush = malloc(sizeof(hash_table_t));
if (hush == NULL)
return (NULL);
hush->size = size;
hush->array = malloc(sizeof(hush->array) * size);
if (hush->array == NULL)
{
free(hush);
return (NULL);
}
return (hush);
}
