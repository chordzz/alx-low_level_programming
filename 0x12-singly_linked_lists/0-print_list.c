#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a list_t list
 * Return: number or nodes/elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
