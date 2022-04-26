#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index in a linked list
 * @head: pointer to pointer of head of list
 * @index: index to delete element
 *
 * Return: 1 (success) or -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int count = 0;

	current = *head;

	while (current != NULL)
	{
		if (index == 0)
		{
			*head = current->next;
			free(current);
			return (1);
		}
		else if ((count + 1) == index)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		current = current->next;
	}
	free(current);
	return (-1);
}
