#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: number
 *
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}

/**
 * _sqrt - a function recurses through numbers for the squareroot
 * @n: input
 * @i: counter
 *
 * Return: the squareroot
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
