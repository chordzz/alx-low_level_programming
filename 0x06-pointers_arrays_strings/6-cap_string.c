#include "main.h"

/**
 * cap_string - capitalizes all characters after a seperator
 * @n: pointer to the string
 * Return: pointer to the string
 */

char *cap_string(char *n)
{
	char *start = n;
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i;

	if (*n >= 97 && *n <= 122)
	{
		*n = *n - 32;
	}

	while (*n != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*n == sep[i])
			{
				if ((*(n + 1) >= 97) && (*(n + 1) <= 122))
				{
					*(n + 1) = *(n + 1) - 32;
				}
				break;
			}
		}
		n++;
	}
	return (start);
}
