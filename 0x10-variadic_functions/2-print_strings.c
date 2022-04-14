#include "variadic_functions.h"

/**
 * print_strings - prints strings seperated with a seperator
 * @seperator: string of seperator
 * @n: the number of integers (unsigned int)
 *
 * Return: void.
 */
void print_strings(const char *seperator, const unsisgned int n, ...)
{
	unsigned int i;
	va_list params;
	char *str;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(params, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(params);
}
