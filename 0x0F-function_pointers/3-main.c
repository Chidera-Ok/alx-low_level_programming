#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*res)(int, int);
	char c;
	char *str;

	i = atoi(argv[1]);
	c = *argv[2];
	str = argv[2];
	j = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	res = get_op_func(str);
	if (!res)
	{
		printf("Error\n");
		exit(99);
	}

	if ((c == '/' || c == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", res(i, j));
	return (0);
}
