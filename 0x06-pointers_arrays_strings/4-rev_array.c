#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: pointer to an integer
 * @n: size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp[n];

	for (int i = 0; i < n; i++)
	{
		temp[i] = *a;
		a++;
	}

	for (int j = 0; j < n; j++)
	{
		*a = temp[j];
		a--;
	}
}
