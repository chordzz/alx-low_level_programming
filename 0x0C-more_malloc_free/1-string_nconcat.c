#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * n: integer
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, count, lstr;
	char *new_mem;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	lstr = i + n;

	new_mem = malloc(lstr + 1);

	if (new_mem == NULL)
		return (NULL);

	for (count = 0; count < lstr; count++)
	{
		if (count < i)
			new_mem[count] = s1[count];
		else
			new_mem[count] = s2[count - i];
	}

	new_mem[count] = '\0';

	return (new_mem);
}
