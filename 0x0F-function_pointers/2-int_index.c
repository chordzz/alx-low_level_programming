#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: integer size of array
 * @cmp: function pointer for comparing values
 *
 * Return: index of first element for which cmp != 0
 * or -1 (failure)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
