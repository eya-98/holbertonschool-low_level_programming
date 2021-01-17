#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table
 *@ht: the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int c, i;
if (!ht)
return;
printf("{");
c = 0;
for (i = 0; i <= ht->size; i++)
{
if (ht->array[i] != NULL)
{
while (ht->array[i])
{
if (c != 0)
printf(", ");
c++;
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
ht->array[i] = ht->array[i]->next;
}
}
}
printf("}\n");
}
