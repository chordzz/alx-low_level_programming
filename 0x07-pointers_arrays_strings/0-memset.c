#include "main.h"

/**
 * _memset - fills an amount of memory with a constant byte
 * @s: a pointer
 * @b: a character
 * @n: an integer
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (start);
}
