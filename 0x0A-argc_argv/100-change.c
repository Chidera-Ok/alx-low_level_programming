#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int tmp, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tmp = atoi(argv[1]);
	if (tmp < 1)
		printf("%d\n", 0);
	while (tmp > 0)
	{
		if (tmp / 25 > 0)
		{
			count += tmp / 25;
			tmp %= 25;
		}
		if (tmp / 10 > 0)
		{
			count += tmp / 10;
			tmp %= 10;
		}
		if (tmp / 5 > 0)
		{
			count += tmp / 5;
			tmp %= 5;
		}
		if (tmp / 2 > 0)
		{
			count += tmp / 2;
			tmp %= 2;
		}
		if (tmp / 1 > 0)
		{
			count += tmp / 1;
			tmp %= 1;
		}
		printf("%d\n", count);
	}
	return (0);
}
