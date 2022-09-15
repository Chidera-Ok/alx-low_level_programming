#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabets in lower case
 * ten times.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int alp, i;

	for (i = 0; i <= 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
