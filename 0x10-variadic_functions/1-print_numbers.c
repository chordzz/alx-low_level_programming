#include "variadic_functions.h"

/**
 * print_numbers - prints numbers seperated with a seperator
 * @seperator: string of seperator
 * @n: the number of integers (unsigned int)
 *
 * Return: void.
 */
void print_numbers(const char *seperator, const unsisgned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(params);
}
