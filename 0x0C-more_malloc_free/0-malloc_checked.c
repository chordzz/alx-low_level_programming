#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memmory using malloc
 * @b: integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
