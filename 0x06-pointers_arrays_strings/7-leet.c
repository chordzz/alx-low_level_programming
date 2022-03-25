#include "main.h"

/**
 * leet - replaces certain characters in a string
 * @n: a pointer
 * Return: pointer to string
 */

char *leet(char *n)
{
	char *start = n;
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char replacement[] = {'4', '3', '0', '7', '1'};
	int i;

	while (*n != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*n == upper[i] || *n == lower[i])
			{
				*n = replacement[i];
			}
		}
		n++;
	}
	return (start);
}
