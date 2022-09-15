#include "main.h"

/**
 * print_alphabet - a function that prints the alphabets in lower case
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
