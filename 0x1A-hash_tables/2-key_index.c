#include "hash_tables.h"

/**
 * key_index - Get index which is at key/value
 *      pair must be stored in array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The key index.
 * Description: Uses djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
