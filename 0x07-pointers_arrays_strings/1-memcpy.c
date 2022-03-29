#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: a pointer to destination memory
 * @src: a pointer to source memory
 * @n: bytes filled
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
