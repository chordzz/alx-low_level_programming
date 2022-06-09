#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the head node of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
