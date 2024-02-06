#include "hash_tables.h"

/**
 * custom_hash_table_set - Add an element to the hash table.
 * @htable: Pointer to the hash table.
 * @key: Key to add the element.
 * @value: Value to add the element.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *htable, const char *key, const char *value)
{
    unsigned long int idx = 0;
    char *value_copy, *key_copy;
    hash_node_t *bucket, *new_node;

    if (!htable || !key || !*key || !value)
        return (0);

    value_copy = strdup(value);
    if (!value_copy)
        return (0);

    idx = key_index((const unsigned char *)key, htable->size);
    bucket = htable->array[idx];

    while (bucket)
    {
        if (!strcmp(key, bucket->key))
        {
            free(bucket->value);
            bucket->value = value_copy;
            return (1);
        }
        bucket = bucket->next;
    }

    new_node = calloc(1, sizeof(hash_node_t));
    if (!new_node)
    {
        free(value_copy);
        return (0);
    }

    key_copy = strdup(key);
    if (!key_copy)
    {
        free(value_copy);
        free(new_node);
        return (0);
    }

    new_node->key = key_copy;
    new_node->value = value_copy;
    new_node->next = htable->array[idx];
    htable->array[idx] = new_node;
    return (1);
}
