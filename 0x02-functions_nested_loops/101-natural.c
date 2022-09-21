#include <stdio.h>

/**
 * main - a program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int n, sum, i;

	n = 1024;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
