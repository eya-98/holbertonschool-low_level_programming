#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value associated with a key
 *@ht: hash table
 *@key: key
 *Return: value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *location;
if (!ht || !key)
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
location = ht->array[idx];
while (location != NULL)
{
if (strcmp(location->key, key) == 0)
{
return (location->value);
}
location = location->next;
}
return (NULL);
}
