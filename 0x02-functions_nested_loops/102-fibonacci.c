#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long int i, j, k, l;


	i = 1;
	j = 2;
	printf("%ld, %ld", i, j);
	for (l = 0; l < 48; l++)
	{
		k = i + j;
		printf(", %ld", k);
		i = j;
		j = k;
	}
	putchar('\n');
	return (0);
}
