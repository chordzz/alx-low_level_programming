
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

	for (letter = '0'; letter <= '9'; letter++)
	{
		if (!(letter == 'q' || letter == 'e'))
		{
			putchar(letter);
		}


	}

	putchar('\n');

	return (0);
}
