#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to pointer of the list head
 *
 * Return: head nodes data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_head;
	listint_t *current;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		current = *head;
		data = current->next;
		temp_head = current->next;
		free(current);
		*head = temp_head;
		return (data);
	}
}
