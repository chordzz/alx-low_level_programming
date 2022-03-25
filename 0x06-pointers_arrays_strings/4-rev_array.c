#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: pointer to an integer
 * @n: size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + (n - 1));
		*(a + (n - 1)) = tmp;
		n--;
	}
}
