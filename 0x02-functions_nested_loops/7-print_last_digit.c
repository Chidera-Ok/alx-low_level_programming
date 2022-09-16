#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: a number
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		n = (-1 * n);
	}
	d = n % 10;
	_putchar('0' + d);
	return (d);
}
