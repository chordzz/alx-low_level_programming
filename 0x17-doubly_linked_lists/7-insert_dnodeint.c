#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: pointer to pointer of head node
 * @idx: index to insert new data
 * @n: data to insert
 *
 * Return: address to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos;
	dlistint_t *new;
	dlistint_t *head;

	new = NULL;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		pos = 1;
		while (head != NULL)
		{
			if (pos == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			pos++;
		}
	}
	return (new);
}
