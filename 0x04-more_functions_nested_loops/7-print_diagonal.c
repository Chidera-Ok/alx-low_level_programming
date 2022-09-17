#include "main.h"

/**
 * print_line - a function that draws a diagonal line in the terminal.
 * @n: number
 */

void print_diagonal(int n)
{
	int i;

	if (n == 0 && n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
}
