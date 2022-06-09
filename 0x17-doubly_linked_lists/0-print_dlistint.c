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
	dlistint_t *head = h;

	if (head == NULL)
		return (nodes);

	while (head != NULL)
	{
		nodes++;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (nodes);
}
