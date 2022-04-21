#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list_t linked list
 * @head: a pointer to a pointer of the list head
 * @str: a string
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new_elem;

	i = 0;
	new_elem = malloc(sizeof(list_t));
	if (new_elem == NULL)
		return (NULL);
	while (str[i])
		i++;
	new_elem->str = strdup(str);
	new_elem->len = i;
	new_elem->next = *head;
	*head = new_elem;
	return (*head);
}
