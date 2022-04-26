#include "lists.h"

/**
 * free_listint2 - frees a listint_t linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t *head)
{
	listint_t *current;

	if (head != NULL)
	{
		while ((current = head) != NULL)
		{
			head = head->next;
			free(current);
		}
		*head = NULL;
	}
}
