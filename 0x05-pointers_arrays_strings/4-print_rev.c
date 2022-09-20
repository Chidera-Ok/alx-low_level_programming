#include "main.h"

/**
 * print_rev -  a function that prints a string,
 * in reverse, followed by a new line.
 * @s: string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
