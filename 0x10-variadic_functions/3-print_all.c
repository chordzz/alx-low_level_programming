#include "variadic_functions.h"

/**
 * print_all - prints anything in the arguments list
 * @format: a list of tyoes of arguments passed to the function.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, c = 0, j;
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
