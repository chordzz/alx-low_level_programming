#include "main.h"
#include <stdlib>

/**
 * _calloc - allocates memory using malloc
 * @nmemb: integer
 * @size: integer
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *new_mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_mem = malloc(nmemb * size);

	if (new_mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		new_mem[i] = 0;

	return (new_mem);
}
