#include "hash_tables.h"
/**
 *
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hush;
hush = malloc(sizeof(hash_table_t));
if (hush == NULL)
return (NULL);
hush->size = size;
hush->array = malloc(sizeof(hash_node_t) * size);
if (hush->array == NULL)
{
free(hush);
return (NULL);
}
return (hush);
}
