#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: a string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (k = (i - 1) / 2; k < i; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
