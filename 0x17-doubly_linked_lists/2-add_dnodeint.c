#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of a dlistint list
 * @head: pointer to a pointer to the head of the list
 * @n: data to be inserted in new node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		new->next = h;
		h->prev = new;
	}

	*head = new;
	return (new);
}
