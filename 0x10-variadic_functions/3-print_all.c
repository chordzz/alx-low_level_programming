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
	const char arg_type[] = "cifs";
	va_start(params, format);

	while (format && format[i])
	{
		j = 0;
		while (arg_type[j])
		{
			if (format[i] == arg_type[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(params, int));
				c = 1;
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				c = 1;
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				c = 1;
				break;
			case 's':
				str = va_arg(params, char *);
				c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(params);
}
