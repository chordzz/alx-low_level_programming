#include "main.h"
/** times_table - program to print times table up to 9
 *
 * Return: 0 (success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j * i);
		}

		_putchar('\n');
	}
}
