#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: unsigned integer
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
