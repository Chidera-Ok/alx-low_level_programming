#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0.
 *
 * Return: 0
 */

void times_table(void)
{
	int i, j, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			d = i * j;

			if (j == 0)
			{
				_putchar(d + '0');
			}
			else if (d < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
