#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
		j++;
	}
}
