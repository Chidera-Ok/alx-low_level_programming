#include <stdio.h>

/**
 * main -  a program that finds and prints the largest prime
 * factor of the number 612852475143, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long int n, i;

	n = 612852475143;
	for (i = 3; i * i <= n; i += 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%ld\n", n);
	return (0);
}
