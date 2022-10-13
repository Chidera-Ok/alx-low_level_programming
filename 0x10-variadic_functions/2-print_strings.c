#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: separator
 * @n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("nil");

		printf("%s", str);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
