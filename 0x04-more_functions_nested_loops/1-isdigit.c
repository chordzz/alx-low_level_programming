#include "main.h"

/**
 * _isdigit - checks if a number is a digit (0 - 9)
 * @c: integer character to check
 *
 * Return: 1 (success) or 0 (not a digit)
 */


int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
