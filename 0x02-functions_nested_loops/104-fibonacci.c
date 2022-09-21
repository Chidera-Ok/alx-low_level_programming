#include <stdio.h>

/**
 * main - a program that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i, j, k;

	int l;

	i = 1;
	j = 2;
	printf("%ld, %ld", i, j);
	for (l = 0; l < 96; l++)
	{
		k = i + j;
		printf(", %lu", k);
		i = j;
		j = k;
	}
	putchar('\n');
	return (0);
}
