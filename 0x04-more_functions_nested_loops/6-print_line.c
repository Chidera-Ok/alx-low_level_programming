#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
