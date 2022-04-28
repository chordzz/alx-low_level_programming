#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of characters
 *
 * Return: (unsigned int) converted number
 * or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i, k;
	unsigned int num, rem, p, j;
	unsigned int temp = 0;
	k = 1;
	p = 1;
	num = 0;

	if (b == NULL)
		return (0);

	length = 0;

	while (*(b + length))
	{
		if (*(b + length) == '1')
		{
			length++;
		}
		else if (*(b + length) == '0')
		{
			length++;
		}
		else
		{
			return (0);
		}
	}

	for (i = 0; i < length; i++)
	{
		temp = temp * 10 + (*(b + i) - 48);
	}

	for (j = temp; j > 0; j = (j / 10))
	{
		rem = j % 10;
		if (k == 1)
			p = p * 1;
		else
			p = p * 2;
		num = num + (rem * p);
		k++;
	}
	return (num);
}
