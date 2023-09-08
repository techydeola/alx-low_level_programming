#include "hash_tables.h"

/**
 * key_index - a function that generates a distributed index
 *             according to a given hash
 *
 * @key: key passed in
 * @size: size of the hash tables
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
