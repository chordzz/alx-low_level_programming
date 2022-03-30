#include "main.h"

/**
 * _pow_recursion - returns the value of an integer
 * raised to the power of another integer
 * @x: an integer
 * @y: an integer
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
