#include "hash_tables.h"
/**
 * hash_table_create - function that creates a has table
 *
 * @size: size of the array
 * Return: a pointer to the new hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **hash_array;
	hash_table_t *new_hash_table;
	unsigned long int i;

	hash_array = malloc(sizeof(hash_node_t) * size);
	new_hash_table = malloc(sizeof(hash_table_t));

	if (!(hash_array))
		return (NULL);
	if (!(new_hash_table))
		return (NULL);

	for (i = 0; i < size; i++)
		hash_array[i] = NULL;

	new_hash_table->array = hash_array;
	new_hash_table->size = size;

	return (new_hash_table);
}
