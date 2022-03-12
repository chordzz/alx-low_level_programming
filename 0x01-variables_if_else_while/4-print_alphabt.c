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

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (!(letter == 'q' || letter == 'e'))
		{
			putchar(letter);
		}


	}

	putchar('\n');

	return (0);
}
