#include "hash_tables.h"

/**
 * key_index - Compute the index for a key in a hash table.
 * @key: The key (string) to hash.
 * @size: The size of the hash table.
 *
 * Return: The index of 'key' using the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
       return (hash_djb2(key) % size);
}

