#include "main.h"

/**
 * clear_bit - sets the bit at given index of a number to zero
 * @n: input (pointer to unsigned long int)
 * @index: index to set
 *
 * Return: value of the bit at index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int newNumber;

	newNumber = (~(1 << index));
	*n = *n & newNumber;
	return (1);
}
