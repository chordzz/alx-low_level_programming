#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 *
 * Return: 0(big endian) || 1(little endian)
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *)&x;

	return ((int) *c);
}
