#include "main.h"

/**
 * puts2 - prints the characters in a string
 * @str: a string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	int j = 0;

	for (j; j < i; j++)
	{
		if (j == 0 || j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
