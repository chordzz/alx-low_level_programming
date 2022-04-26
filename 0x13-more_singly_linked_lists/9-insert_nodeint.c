#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to pointer of head of list
 * @idx: index to insert element
 * @n: element to insert
 *
 * Return: nth node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	unsigned int count = 0;
	listint_t *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (current != NULL)
	{
		if (count == (index - 1))
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
