#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list head
 *
 * Return: (size_t) number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
