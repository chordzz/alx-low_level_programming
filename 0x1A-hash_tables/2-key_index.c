#include "hash_tables.h"
/**
 * key_index - function that returns the index of a key in a hash table
 *
 * @key: the key to be hashed
 * @size: size of the array of the hash table
 * Return: index where the key/value pair should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!(key) || !(size))
		return (0);

	return (hash_djb2(key) % size);
}
