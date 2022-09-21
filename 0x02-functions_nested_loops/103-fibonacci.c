#include <stdio.h>

/**
 * main - a program that finds and prints the sum of
 * the even-valued terms followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long int i, j, k, l, sum;


	i = 1;
	j = 2;
	sum = i + j;
	for (l = 0; l < 48; l++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k > 4000000)
			break;
		sum += k;
	}
	printf("%ld\n", sum);
	return (0);
}
