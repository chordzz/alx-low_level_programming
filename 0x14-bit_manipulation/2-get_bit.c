#include "main.h"

/**
 * get_bit - returns the bit at given index of a number
 * @n: input (unsigned int)
 * @index: index to check
 *
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = (n >> index) & 1;

	return (value);
}
