#include "hash_tables.h"
/**
 **
 *
 *
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
int c;
if (!ht)
return;
printf("{");
c = 1;
for (i = 0; i < ht->size; i++)
{
for (j = 0; ht->array[j] != NULL; j++)
{
if (c != 1)
printf(", ");
 printf("%s': %s", ht->array[j]->key, ht->array[j]->value);
}
}
printf("}\n");
}
