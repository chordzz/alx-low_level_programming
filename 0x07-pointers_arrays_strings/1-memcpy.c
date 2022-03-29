#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: a poiniter
 * @src: a pointer
 * @n: an integer
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);
}
