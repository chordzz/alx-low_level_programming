#include "main.h"

/**
 * _strncpy - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: integer
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *pointer = dest;

	while (n--)
	{
		if (*src == '\0')
		{
			break;
		}

		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (pointer);
}
