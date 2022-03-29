#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s = '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
