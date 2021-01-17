#include "hash_tables.h"
/**
 *hash_table_delete - delete hash table
 *@ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *n;
for (i = 0; i < ht->size; i++)
{
while (ht->array[i])
{
n = ht->array[i];
ht->array[i] = ht->array[i]->next;
free(n->key);
free(n->value);
free(n);
ht->array[i] = n;
}
}
free(ht->array);
free(ht);
}
