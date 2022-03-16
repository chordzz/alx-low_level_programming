#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: a ascii character to check
 *
 * Return: 1 (Success)
 * 0 (failure)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
