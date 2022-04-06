#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: integer
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pointer1 = dest;

	while (*dest != '\0')
	{
		dest++;
	}

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
	return (pointer1);
}
