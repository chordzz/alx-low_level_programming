#include "lists.h"

/**
 * print_dlistint - print all the elements of dlistint_t list
 * @h: pointer to the head node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
