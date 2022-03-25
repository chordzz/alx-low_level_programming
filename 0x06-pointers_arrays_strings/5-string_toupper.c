#include "main.h"

/**
 * string_toupper - converts all lowercase letters to uppercase
 * @n: string
 * Return: pointer to string
 */

char *string_toupper(char *n)
{
	char *start = n;

	while (*n != '\0')
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n = *n - 32;
		}

		n++;
	}

	return (start);
}
