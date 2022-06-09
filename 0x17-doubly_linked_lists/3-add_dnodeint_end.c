#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a dlistint list
 * @head: pointer to a pointer to the head of the list
 * @n: data to be inserted in new node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
		new->prev = h;
	}
	else
	{
		*head = new;
	}

	return (new);
}
