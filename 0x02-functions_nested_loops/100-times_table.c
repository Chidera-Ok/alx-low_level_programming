#include "main.h"

/**
 * print_times_table - a function that prints the n times table,
 * starting with 0.
 * @n: an integer
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j, k, l;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (j == 0)
				{
					_putchar(k + '0');
				}
				else if (k / 10 == 0 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k / 10 < 10)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					l = (k % 100)  / 10;
					_putchar((k / 100) + '0');
					_putchar(l + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
