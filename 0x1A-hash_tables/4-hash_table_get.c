#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: Pointer to the hash table.
 * @key: The key to retrieve the value.
 *
 * Return: The value associated with the key, or NULL if the key does not exist.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *tmp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (!strcmp(key, tmp->key))
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
