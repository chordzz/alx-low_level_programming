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
	hash_node_t *tmp;

	if (!(ht))
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	elem = ht->array[idx];
	tmp = elem;
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			strcpy(elem->value, strdup(value));
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!(new_node))
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (elem)
	{
		new_node->next = elem;
		ht->array[idx] = new_node;
	}
	else
	{
		ht->array[idx] = new_node;
	}
	return (1);
}
