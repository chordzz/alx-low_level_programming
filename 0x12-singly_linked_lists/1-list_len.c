#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: a list_t list
 * Return: number or nodes/elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
