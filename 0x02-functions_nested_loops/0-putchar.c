#include "main.h"

/*
 * main - entry point for the program
 *
 * Description: Program to print _putchar
 * Return: zero
 */

int main(void)
{
	char text[9] = "_putchar";

	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');

	return (0);
}
