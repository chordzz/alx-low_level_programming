#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: input string.
 * Return: the pointer to string.
 */

char *rot13(char *n)
{
	char *start = n;
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*n != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*n == alphabet[i])
			{
				*n = rot13[i];
				break;
			}
		}
		n++;
	}

	return (start);
}
