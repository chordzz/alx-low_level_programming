#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: the hash table to add the element
 * @key: is the key that should be hashed
 * @value: the value associated with the key
 * Return: 1 (success), 0 (otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node;
	hash_node_t *elem;

	if (!(ht))
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!(new_node))
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;


	idx = key_index((unsigned char *)key, ht->size);
	elem = ht->array[idx];

	if (elem == NULL)
	{
		elem = new_node;
	}
	else
	{
		new_node->next = elem;
	}

	return (1);
}
