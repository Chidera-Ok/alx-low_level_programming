#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: an integer
 *
 * Return: the absolute value of the integer n
 */

int _abs(int n)
{
	if ((n == 0) || (n > 0))
		return (n);
	else
		return (-n);
}
