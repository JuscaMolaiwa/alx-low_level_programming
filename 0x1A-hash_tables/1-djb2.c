#include "hash_tables.h"

/**
 * hash_djb2 - Compute the hash value of a string using the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The computed hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int character;

	hash_value = 5381;
	while ((character = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + character; /* hash * 33 + character */
	}
	return (hash_value);
}
