#include <stdio.h>

/**
 * main- Entry point of the app
 *
 * Description: Main function of the program
 * Return: zero
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);

	}

	putchar('\n');

	return (0);
}
