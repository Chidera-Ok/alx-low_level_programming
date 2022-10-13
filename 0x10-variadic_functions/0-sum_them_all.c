#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ab;

	va_start(ab, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ab, int);
	}

	va_end(ab);
	return (sum);
}
