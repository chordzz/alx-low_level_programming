#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: a ascii character to check
 *
 * Return: 0 (Success)
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
