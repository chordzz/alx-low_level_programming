#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	char temp[];
	int counter = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	while (length >= 0)
	{
		temp[counter] = s[length];
		length--;
		counter++;
	}
	s = temp;
}
