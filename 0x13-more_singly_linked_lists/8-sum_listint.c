#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: pointer to head of list
 *
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
