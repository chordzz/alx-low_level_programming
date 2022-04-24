#include "main.h"

/**
 * _isupper - checks if a number is uppercase
 * @c: integer character to check
 *
 * Return: 1 (success) or 0 (not a digit)
 */


int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
