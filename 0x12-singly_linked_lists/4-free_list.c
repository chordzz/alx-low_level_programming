#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a list_t list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
