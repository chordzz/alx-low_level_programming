#include <stdio.h>

/**
 * main- Entry point of the app
 *
 * Description: Main function of the program
 * Return: zero
 */

int main(void)
{
	int letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
