#include "hash_tables.h"

/**
 * hash_table_print - Prints the key-value pairs stored in a hash table.
 * @ht: Pointer to the hash table.
 *
 * Description: This function prints the contents of the hash table in the
 * format "{key1: value1, key2: value2, ...}".
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i = 0;
    hash_node_t *bucket;
    int not_finished = 0;

    if (!ht)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        bucket = ht->array[i];
        while (bucket)
        {
            if (not_finished)
                printf(", ");
            printf("'%s': '%s'", bucket->key, bucket->value);
            not_finished = 1;
            bucket = bucket->next;
        }
    }
    printf("}\n");
}
