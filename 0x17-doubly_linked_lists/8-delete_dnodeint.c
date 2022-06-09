#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at given index
 * @head: pointer to pointer to head node
 * @index: position to delete node
 *
 * Return: 1 (success) or -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2 = NULL;
	unsigned int pos = 0;

	while (temp != NULL)
	{
		if (pos == index)
		{
			if (pos == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp2->next = temp->next;
				if (temp->next != NULL)
					temp->next->prev = temp2;
			}
			free(temp);
			return (1);
		}
		temp2 = temp;
		temp = temp->next;
		pos++;
	}
	return (-1);
}
