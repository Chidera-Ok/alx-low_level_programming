#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number -  a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: integer
 *
 * Return: 1 if the input integer is a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_prime(n, n / 2));
}

/**
 * _prime - a function that checks if a number is prime
 * @n: input integer
 * @i: counter
 *
 * Return: 1 if the input integer is a prime number
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (1);
	_prime(n, i - 1);
}
